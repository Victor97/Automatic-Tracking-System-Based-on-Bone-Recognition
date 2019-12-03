;; Auto-generated. Do not edit!


(when (boundp 'openpose_ros_msgs::bodypart_3d)
  (if (not (find-package "OPENPOSE_ROS_MSGS"))
    (make-package "OPENPOSE_ROS_MSGS"))
  (shadow 'bodypart_3d (find-package "OPENPOSE_ROS_MSGS")))
(unless (find-package "OPENPOSE_ROS_MSGS::BODYPART_3D")
  (make-package "OPENPOSE_ROS_MSGS::BODYPART_3D"))

(in-package "ROS")
;;//! \htmlinclude bodypart_3d.msg.html


(defclass openpose_ros_msgs::bodypart_3d
  :super ros::object
  :slots (_x _y _z _confidence ))

(defmethod openpose_ros_msgs::bodypart_3d
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    ((:confidence __confidence) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   (setq _confidence (float __confidence))
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
  (:confidence
   (&optional __confidence)
   (if __confidence (setq _confidence __confidence)) _confidence)
  (:serialization-length
   ()
   (+
    ;; float64 _x
    8
    ;; float64 _y
    8
    ;; float64 _z
    8
    ;; float64 _confidence
    8
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
     ;; float64 _confidence
       (sys::poke _confidence (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
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
   ;; float64 _confidence
     (setq _confidence (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get openpose_ros_msgs::bodypart_3d :md5sum-) "5b22696805db01f2f8a3f062ba847d53")
(setf (get openpose_ros_msgs::bodypart_3d :datatype-) "openpose_ros_msgs/bodypart_3d")
(setf (get openpose_ros_msgs::bodypart_3d :definition-)
      "float64 x
float64 y
float64 z
float64 confidence

")



(provide :openpose_ros_msgs/bodypart_3d "5b22696805db01f2f8a3f062ba847d53")


