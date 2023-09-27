#!/bin/bash


function display_disk_space_usage() {
    echo "Disk Space Usage:"
    df -h
}


function display_filesystem_usage() {
    echo "Filesystem Usage:"
    du -h
}


display_disk_space_usage
display_filesystem_usage

