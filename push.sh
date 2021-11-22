#!/usr/bin/bash

commit_message="Default commit"
read -p "Enter commit message: " commit_message
commit_message="$commit_message `date`"
echo "Your commit message : $commit_message\n"
git add .
git commit -a -m "$commit_message"
git push origin master
