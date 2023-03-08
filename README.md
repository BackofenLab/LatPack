# LatPack

Collection of tools related to modelling and folding simulations of lattice-protein models with arbitrary energy functions


# Compilation

When downloading the sources directly from or via cloning the repository, you need to first initialize the configure script.
To simply, we provide a simple bash script:

```
bash initialize_configure.sh
```

Afterwards (or when downloading the source tar-ball), you can check the `configure` options.

```
# check configure options
./configure --help

# run configure
./configure
# compile binaries
make
```

If compilation went fine, the binaries will be available within the `src` folder. 

You can install the binaries to your system via

```
# install to default directory, to be changed via "./configure --prefix=XXX"
make install 

# install to specified directory
make install prefix=XXX
```

