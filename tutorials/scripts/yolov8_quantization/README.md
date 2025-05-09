
# YOLOv8 for STM32
This tutorial shows how to quantize Yolov8 saved models generated by [stm32-hotspot/ultralytics](https://github.com/stm32-hotspot/ultralytics/tree/main/examples/YOLOv8-STEdgeAI)

## Features
- The script can take as input a saved model.
- The script supports per channel or per tensor quantization
- The script can do fake quantization or use a specified calibration dataset (mandatory to have meaningful accuracy)
- The script supports different configurations for input / output, float, int8 or uint8

## Installation
- The Python script have been validated in a python v3.10 environment
- Install the model zoo requirements : pip install -r requirements.txt 
	
## Usage
- Update the user_config_quant.yaml file
- Run the script:
```bash
python tflite_quant.py --config-name user_config_quant.yaml
```

## Configuration: yaml file configuration
- model:
  - name: yolov8n_256 => root name of the output file
		uc: od_coco => optional text added to the output file name (here od stands for object detection and coco for the dataset used)
  - model_path: ./yolov8n_coco/saved_model => link to the input model, root directory of the saved model or h5 file
  - input_shape: [256, 256, 3] => specify the input shape
- quantization:
  - fake: False => If True, will do fake quantization (just for performance evaluation and not accuracy evaluation)
  - quantization_type: per_channel => per channel quantization (pc tag, recommended) or per_tensor quantization (pt tag)
  - quantization_input_type: uint8 => model input format float, int8 or uint8
  - quantization_output_type: float => model output format float, int8 or uint8
  - calib_dataset_path: ./calibration_dataset => folder with the calibration images that will be used for quantization
  - export_path: ./quantized_models => output directory where the quantized models will be saved
- pre_processing:
  - rescaling: {scale : 255, offset : 0} => {scale : 255, offset : 0} for models with images normalized during the training between 0 and 1, to be used with Yolov8/Yolov5
											 => {scale : 127.5, offset : -1} for models with images normalized during the training between -1 and 1

- With the above yaml configuration, the output model will have unsigned int8 input and float output and will be saved as:
./quantized_models/yolov8n_256_quant_pc_uf_od_coco.tflite
