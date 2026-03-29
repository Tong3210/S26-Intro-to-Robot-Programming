import rclpy
import rclpy.node
from rcl_interfaces.msg import ParameterDescriptor

class MinimalParam(rclpy.node.Node):
    def __init__(self):
        super().__init__('minimal_param_node')
        self.declare_parameter('my_parameter', 'world')
        self.declare_parameter('wait_time', 1.0, ParameterDescriptor(description='Time between prints (sec)'))
        wait_time = self.get_parameter('wait_time').get_parameter_value().double_value
        self.timer = self.create_timer(wait_time, self.timer_callback)

    def timer_callback(self):
        my_param = self.get_parameter('my_parameter').get_parameter_value().string_value
        self.get_logger().info('Hello %s!' % my_param)

def main():
    rclpy.init()
    node = MinimalParam()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
