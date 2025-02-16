#!/usr/bin/env python3

import rclpy
from harvest_interfaces.srv import ApplePrediction

class PathCreation():
    def __init__(self):
        self.start_apple_prediction_client = self.create_client(ApplePrediction, "apple_prediction_presaved_images")
        while not self.prediction_client.wait_for_service(timeout_sec = 1.0):
             self.get_logger().info("Prediction service unavailable, waiting...")

        self.future = None

    def start_apple_prediction(self):
        # Starts servo node
        self.request = ApplePrediction.Request()
        self.future = self.start_apple_prediction_client.call_async(self.request)
        rclpy.spin_until_future_complete(self, self.future) 
        return self.future.result().apple_poses 

    def rrt(self):
        self.req.a = a
        self.req.b = b
        self.future = self.prediction_client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        self.apple_prediction_data =  self.future.result()

    def rrt_star(self):
        pass

def main(args=None):
    rclpy.init(args=args)
    path_creator = PathCreation()
    path_creator.rrt()
    # rclpy.spin(path_creator)
    rclpy.shutdown()

if __name__ == '__main__':
    main()