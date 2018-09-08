#!/bin/bash
git add .
git commit -m $1
git remote add $1 https://github.com/prashanth5192/WD-40
git pull
git push -u $1 master
