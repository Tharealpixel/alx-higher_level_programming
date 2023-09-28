#!/bin/bash
# script that takes in a URL, request URL displays the size of the body
curl -sI "$1" | wc -c