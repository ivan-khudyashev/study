#!/bin/bash
# Create directories for transcompiled JS5 code
if [ ! -d dist ]
then
    mkdir dist
fi
if [ ! -d public/dist ]
then
    mkdir public/dist
fi
# Install all modules for building with gulp
#  and transcompiling with babel
npm install --save-dev @babel/core && \
npm install --save-dev @babel/preset-env && \
npm install --save-dev gulp && \
npm install --save-dev gulp-babel && \
echo "Local modules installed successfull"
