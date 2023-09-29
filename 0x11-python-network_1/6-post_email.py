#!/usr/bin/python3
"""
Script that takes in a URL and an email addr, sends a POST reqst to the
passed URL with the email as a paramet, and finally displays the body
of the response.

Usage: ./6-post_email.py <URL> <email>
  - Displays the body of the response.
"""
import requests
from sys import argv


if __name__ == "__main__":
    url = argv[1]
    value = {"email": argv[2]}
    req = requests.post(url, data=value)

    print(req.text)
