# Boilerplate platformio project within a vscode devcontainer

After building, you need to run
```bash
echo "export PATH=$PATH:$HOME/.platformio/penv/bin" >> /home/vscode/.bashrc
```
within the container.

After that you can run native tests with
```bash
pio test -e native
```

and compile the project with:
```bash
pio run -e az-delivery-devkit-v4
```