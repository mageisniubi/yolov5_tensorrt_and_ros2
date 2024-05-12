import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    pkg_share_dir = get_package_share_directory('yolov5')

    return LaunchDescription([
        Node(
            package='yolov5',
            executable='yolov5',
            output='screen',
            parameters=[
                {'engine_name': pkg_share_dir + '/weights/yolov5s6.engine'},
                {'img_sub_topic': '/rs_d435/image_raw'},
                {'img_pub_topic': '/image/obj_detection'},
                {'box_pub_topic': '/targets/bboxs'},
            ],
        ),
    ])
