import qrcode

img = qrcode.make("https://www.google.com")
img.save("qr.png", "PNG")


# run this python file qr.py
# to display the QR code generated: code qr.png
