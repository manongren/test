n

git remote add origin https://github.com/manongren/test.git

remote -v

git config --global user.name "manongren"

git config --global user.email "manong.ren@qq.com"

git push --set-upstream origin master

#Username for 'https://github.com': manongren
#Password for 'https://manongren@github.com':xxx

ssh -T git@github.com

git add -A

git commit -m "update "

git push

==========

cd ~
cat .git-credentials 

https://manongren:PASSWORD@github.com

cd ~/manongren/test
cd .git
cat config

[core]
	repositoryformatversion = 0
	filemode = true
	bare = false
	logallrefupdates = true
[remote "origin"]
	url = https://manongren:PASSWOR@github.com/manongren/test.git
	fetch = +refs/heads/*:refs/remotes/origin/*
[branch "master"]
	remote = origin
	merge = refs/heads/master


