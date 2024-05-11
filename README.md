# yolov5_tensorrtx_and_ros2

## 介绍
这是一个将***yolov5***生成的***权重文件.pt***进行tensoret加速的项目，生成***.engine***，并结合***ros2***进行消息接收，处理和发布


## 安装教程

打开本地工作空间文件夹终端执行`git clone https://gitee.com/mamou_space/yolov5_tensorrt_and_ros2.git`

## 使用说明

```
有n/s/m/l/x/n6/s6/m6/l6/x6这些不同的模式，对于带6的可以输入1280的图片，拥有更高的准确度

```

### 使用与运行 yolov5s 作为例子

1.从pt生成wts文件

```
//拷贝本工程中的gen_wts.py文件，到yolov5的工程中（训练的工程），并进入
cp {tensorrt}/src/yolov5/src/gen_wts.py {ultralytics}/yolov5
cd {ultralytics}/yolov5
//得到yolov5s.wts文件
python gen_wts.py -w yolov5s.pt -o yolov5s.wts
```


## 参与贡献

1.  MYP

