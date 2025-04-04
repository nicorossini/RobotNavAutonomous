from setuptools import find_packages, setup

package_name = 'navigation_unity_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='ubuntu@todo.todo',
    description='Subscriber per ricevere coordinate da Unity',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
               'target_subscriber = navigation_unity_package.my_subscriber:main',
	       'agent_target_publisher = navigation_unity_package.agent_target_publisher:main',
	       'agent_distance_subscriber = navigation_unity_package.agent_distance_subscriber:main',
        ],
    },
)
