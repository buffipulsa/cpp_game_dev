Write-Host "Importing Scoop environment..."

scoop import .\tools\scoop\scoopfile.json

Write-Host "Installed versions:"
gcc --version
clang++ --version
cmake --version