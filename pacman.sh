#!/bin/bash

curl -o ~/Library/.257.mp3 http://s1download-universal-soundbank.com/mp3/sounds/257.mp3

echo "alias vim=\"afplay $HOME/Library/.257.mp3 && vim\"" >> ~/.zshrc

#source ~/.zshrc
#source ~/.bashrc

rm -rf $0