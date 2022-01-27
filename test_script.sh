#!/bin/sh
for file in ./error_file/*
do
	echo $file
    ./fillit $file
done