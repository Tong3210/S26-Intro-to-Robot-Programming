import rclpy
from rclpy.impl.rcutils_logger import RcutilsLogger
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge
from cv_bridge.core import CvBridgeError
import numpy as np
import sys

def imgmsg_to_cv2(img_msg):
    if img_msg.encoding != "bgr8":
        logger = RcutilsLogger("my_logger")
        logger.error("This Coral detect node has been hardcoded to the 'bgr8' encoding.  Come change the code if you're actually trying to implement a new camera")

    dtype = np.dtype("uint8")
    dtype = dtype.newbyteorder('>' if img_msg.is_bigendian else '<')
    image_opencv = np.ndarray(shape=(img_msg.height, img_msg.width, 3),
                    dtype=dtype, buffer=img_msg.data)
    
    if img_msg.is_bigendian == (sys.byteorder == 'little'):
        image_opencv = image_opencv.byteswap().newbyteorder()
    
    return image_opencv

def cv2_to_imgmsg(cv_image):
    img_msg = Image()
    img_msg.height = cv_image.shape[0]
    img_msg.width = cv_image.shape[1]
    img_msg.encoding = "bgr8"
    img_msg.is_bigendian = 0
    img_msg.data = cv_image.tostring()
    img_msg.step = len(img_msg.data) // img_msg.height 
    return img_msg

class WebcamSub(Node):
    def __init__(self):
        super().__init__('stream_node')

        self.bridge = CvBridge()

        # define subscriber
        self.img_subscription = self.create_subscription(Image, 'image_raw', self.img_callback, 1)
        
        self.img_subscription # prevent unused varaibale warning

    def img_callback(self, img_msg):
        # bridging from img msg to cv2 img
        try:
            cv_image = self.bridge.imgmsg_to_cv2(img_msg, 'bgr8')
        except CvBridgeError as e:
            self.get_logger().info(e)
        
        # show image
        cv2.namedWindow("Image")
        if cv_image is not None:
            cv2.imshow("Image", cv_image)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)

    imgsub_obj = WebcamSub()
    
    rclpy.spin(imgsub_obj)

    imgsub_obj.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
