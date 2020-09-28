#!/usr/bin/bash

echo history > "history_$(date +%Y%m%d)"
git config --global user.email arthur.zeibots@gmail.com
git add .
git commit -m $(date +%Y%m%d)
git push origin master
