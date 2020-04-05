"""
setup.py file for ascii_block
"""

from distutils.core import setup, Extension


ascii_block_module = Extension('_ascii_block',
                           sources=['ascii_block_wrap.cxx', 'ascii_block.cpp', 'ConvString.cpp'],
                           )

setup (name = 'ascii_block',
       version = '1.0',
       author      = "Fynn Terhar",
       description = """Python interface for a simple Program that converts strings to ASCII Blocks""",
       ext_modules = [ascii_block_module],
       py_modules = ["ascii_block"],
       )