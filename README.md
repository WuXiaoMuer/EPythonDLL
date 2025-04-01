

# EPythonDLL

A Python DLL for e/c/c++ programming.

## 文件结构

| 文件/目录                 | 描述                    |    |
| ------------------------- | ----------------------- | -------------- |
| `.gitattributes`          | Git属性配置文件         |  |
| `EPythonDLL.e`            | 主程序文件              |     |
| `EPythonDLL.zip`          | 压缩包                  |     |
| `LICENSE`                 | 许可证文件（GPL-3.0）   |  |
| `add.c`                   | C语言实现示例           |     |
| `add.cp312-win32.pyd`     | Python 3.12 Win32动态库 |     |
| `add.cp312-win_amd64.pyd` | Python 3.12 x64动态库   |     |
| `add.pyx`                 | Cython实现示例          |     |
| `add32.dll`               | 32位动态链接库          |    |
| `add64.dll`               | 64位动态链接库          |      |
| `build.bat`               | Windows构建脚本         |      |
| `build.py`                | Python构建脚本          |      |

| 文件/目录                 | 描述                    |    |
| ------------------------- | ----------------------- | -------------- |
| 'build/'                          |     构建目录，包含编译过程中生成的临时文件和最终的扩展模块。<br>- lib.win-amd64-cpython-312/：存放 64 位 Windows 系统下 Python 3.12 的编译结果。<br>- temp.win-amd64-cpython-312/：存放编译过程中生成的临时文件。                  |                |
|'MSVC_PyDLL/'| 包含 Visual Studio 项目文件，用于使用 Visual Studio 进行项目开发和编译。 | |

## 构建说明

1. **Windows环境**：
   
   ```bash
   # 使用build.bat脚本自动构建
   build.bat
   # python build.py build_ext --inplace
   
1. Python 构建

   ```
   Bash# 执行Python构建脚本
   python build.py
   ```

## 许可证

```
GNU GENERAL PUBLIC LICENSE
Version 3, 29 June 2007
```

## 功能示例

### C 语言接口示例 (add.c)

```
#include <Python.h>

static PyObject* add(PyObject* self, PyObject* args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b))
        return NULL;
    return PyLong_FromLong(a + b);
}
```

### Cython 接口示例 (add.pyx)

```
import cython

@cython.boundscheck(False)
@cython.wraparound(False)
def add(int a, int b):
    return a + b
```

## 项目特点

- 支持多平台编译（32 位 / 64 位）
- 提供 C/C++/Cython 多语言绑定示例
- 遵循 GPL-3.0 开源协议
- 包含预编译二进制文件（add32.dll/add64.dll）

## 贡献指南

1. 克隆仓库：

   ```
   git clone https://github.com/WuXiaoMuer/EPythonDLL.git
   ```

2. 提交代码时保持代码规范

3. 建议通过 Pull Request 提交贡献