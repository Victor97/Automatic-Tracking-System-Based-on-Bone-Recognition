;; Auto-generated. Do not edit!


(when (boundp 'openpose_ros_msgs::speed_msgs)
  (if (not (find-package "OPENPOSE_ROS_MSGS"))
    (make-package "OPENPOSE_ROS_MSGS"))
  (shadow 'speed_msgs (find-package "OPENPOSE_ROS_MSGS")))
(unless (find-package "OPENPOSE_ROS_MSGS::SPEED_MSGS")
  (make-package "OPENPOSE_ROS_MSGS::SPEED_MSGS"))

(in-package "ROS")
;;//! \htmlinclude speed_msgs.msg.html


(defclass openpose_ros_msgs::speed_msgs
  :super ros::object
  :slots (_x _y _z _a _control _run ))

(defmethod openpose_ros_msgs::speed_msgs
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:a __a) 0.0)
    ((:control __control) 0.0)
    ((:run __run) 0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _a (float __a))
   (setq _control (float __control))
   (setq _run (round __run))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:z
   (&optional __z)
   (if __z (setq _z __z)) _z)
  (:a
   (&optional __a)
   (if __a (setq _a __a)) _a)
  (:control
   (&optional __control)
   (if __control (setq _control __control)) _control)
  (:run
   (&optional __run)
   (if __run (setq _run __run)) _run)
  (:serialization-length
   ()
   (+
    ;; float64 _x
    8
    ;; float64 _y
    8
    ;; float64 _z
    8
    ;; float64 _a
    8
    ;; float64 _control
    8
    ;; int32 _run
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _z
       (sys::poke _z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _a
       (sys::poke _a (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _control
       (sys::poke _control (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; int32 _run
       (write-long _run s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _z
     (setq _z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _a
     (setq _a (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _control
     (setq _control (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; int32 _run
     (setq _run (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get openpose_ros_msgs::speed_msgs :md5sum-) "61028b1cdfbf63753def51166b8a3571")
(setf (get openpose_ros_msgs::speed_msgs :datatype-) "openpose_ros_msgs/speed_msgs")
(setf (get openpose_ros_msgs::speed_msgs :definition-)
      "float64 x
float64 y
float64 z
float64 a
float64 control
int32 run


")



(provide :openpose_ros_msgs/speed_msgs "61028b1cdfbf63753def51166b8a3571")


