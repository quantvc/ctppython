# encoding:utf-8
import os
import sys

from setuptools import setup, find_packages, Extension

project_dir = os.path.join(os.path.dirname(__file__), "pyctp")

ctp_dir = os.path.abspath(os.path.join(project_dir, "ctp"))

header_dir = os.path.abspath(os.path.join(project_dir, "header"))

compile_args = []
extra_link_args = []

package_data = ["ctp/*.xml", "ctp/*.dtd"]

if sys.platform == "linux":
    compile_args = ["-03", "-Wall"]
    extra_link_args = ["-g"]
    package_data.append("ctp/*.so")
elif sys.platform == "win32":
    compile_args = ["/GR", "/EHsc"]
    extra_link_args = []
    package_data.append("ctp/*.dll")

common_args = {
    "include_dirs": [ctp_dir, header_dir],
    "library_dirs": [ctp_dir],
    "language": "c++"
}

extensions = [
    Extension(name="pyctp.md_api",
              sources=["pyctp/md_api.cpp", "pyctp/api_struct.cpp", "pyctp/md_wrapper.cpp"],
              extra_compile_args=compile_args,
              extra_link_args=extra_link_args,
              libraries=["thostmduserapi"],
              **common_args)
]

setup(name="python CTP api",
      version="6.3.6",
      author="winton.wang",
      author_email="winton@quant.vc",
      description="This is CTP wrapper python interface",
      include_package_data=True,
      packages=find_packages(),
      package_data={"": package_data},
      ext_modules=extensions)
