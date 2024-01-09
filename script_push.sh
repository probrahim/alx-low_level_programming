#!/bin/bash
if [ -n "$(git status --porcelain)" ]; then
	git add .
	commit_message=${1:-"Update changes"}
	git commit -m "$commit_message"
	git push origin master
	echo "Changes pushed to GitHub successfully."
		else
	echo "No changes to commit."
fi
