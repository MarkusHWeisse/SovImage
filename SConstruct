import fnmatch
import os

#Setup environment
file_match = "*.cpp"

#Recursive Glob method to find all source files
matches = []
for root, dirnames, filenames in os.walk("src/"):
    for filename in filenames:
        if fnmatch.fnmatch(filename, file_match):
            matches.append(os.path.join(root, filename))

#Compile the program
env = Environment(CPPPATH=r'C:\SFML\SFML-2.6.1\include');
#env.Append(CCFLAGS=["-std=c++11"]); #C:\mingw-w64\mingw64\bin    C:\TDM-GCC-64\bin
#env.Append(CCFLAGS=["-g"]);
#env.Append(CCFLAGS=["-pipes"]);
#env.Append(CCFLAGS=["-m32"]);
env.Append(CCFLAGS=["-lcomdlg32"]);
env.Append(CCFLAGS=["-lole32"]);
env.Append(CCFLAGS=["-static-libgcc"]);
env.Append(CCFLAGS=["-static-libstdc++"]);
env.Append(CCFLAGS=["-municode"]);
env.Append(CCFLAGS=["-gdwarf-2"]);
env['ENV']['PATH'] = [r'C:\mingw64\bin']
env['CXX'] = 'g++' #g++ x86_64-w64-mingw32-c++
env.Append(LIBS = ["sfml-graphics","sfml-window","sfml-system"]); # C:\mingw64\x86_64-w64-mingw32\lib
env.Append(LIBS = ["ole32", "comctl32", "oleaut32", "uuid", "shell32"]);
env.Append(LIBPATH = r"C:\SFML\SFML-2.6.1\lib");
env.Append(LIBPATH = r"C:\mingw64\lib");
env.Program(target = "Sovieditor.exe", source = matches)
