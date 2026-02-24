class Robot:
    def __init__(self, id_number, location):
        self.id_number = id_number
        self.location = location
        self.is_online = False 

    def moveBot(self, new_location):
        self.location = new_location

    def changeStatus(self):
        self.is_online = not self.is_online

    def __str__(self):
        status = "online" if self.is_online else "offline"
        return f"Robot {self.id_number} is {status} at {self.location}"


# Verifying Script
my_bot = Robot(1, "A1")
print(f"Start: {my_bot}")

my_bot.changeStatus()

my_bot.moveBot("A2")

print(f"End:   {my_bot}")
