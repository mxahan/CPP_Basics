#!/bin/bash
echo "Hello World!"

# video input


ffmpeg -t 3 -f v4l2 -framerate 90 -video_size 1280x720 -input_format mjpeg -i /dev/video0 mjpeg.mkv
python test_py.py
