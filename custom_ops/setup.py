from setuptools import setup
from torch.utils.cpp_extension import BuildExtension, CUDAExtension, CppExtension
import torch


if torch.cuda.is_available():
    extension = CUDAExtension('get_patches',
                              ['get_patches.cpp', 'get_patches_cuda.cu'])
else:
    extension = CppExtension('get_patches', ['get_patches.cpp'])
setup(name='custom_ops',
      ext_modules=[extension],
      cmdclass={'build_ext': BuildExtension})
