# Automatic-Tracking-System-Based-on-Bone-Recognition  
Automatic Tracking System Based on Bone Recognition.  

NOTICE:  
个人毕业设计内容，用于分享学习。  
因为已经工作，所以可能不会有下一步的更新。  


本设计基于开源OPENPOSE骨骼识别库，在ROS框架下开发。  
具体硬件参数如下：  
上位机：NVIDIA JETSON TX2  
下位机：Arduino UNO官方核心板  
摄像头：ZED双目视觉摄像机  
被控对象：现有电动轮椅平台。

以下主要是一些简单引导以及成果展示

ROS配置
========
ROS wrapper for OpenPose ( https://github.com/CMU-Perceptual-Computing-Lab/openpose ) allows the estimation of 2d multi-person pose from a single RGB camera (see commit number a1e0a5f4136e702b5731a268c2993fb75ca4753c ). Based on https://github.com/stevenjj/openpose_ros .
的
