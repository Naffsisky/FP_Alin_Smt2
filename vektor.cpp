#Prinafsika (21081010278)
import pyfiglet
import math
import matplotlib.pyplot as plt

intro = pyfiglet.figlet_format("VEKTOR 2D and 3D", font = "standard")
intronama = pyfiglet.figlet_format("By : Kelompok 9", font = "slant")

print(intro)
print(intronama)
print('|--------------------------------------|')
print('|          PERHITUNGAN VEKTOR          |')
print('|--------------------------------------|')
print('|                  MENU                |')
print('| 1. Menampilkan Vektor 2D             |')
print('| 2. Menampilkan Vektor 3D             |')
print('| 3. Mencari Vektor A (i, j, k)        |')
print('| 4. Mencari Vektor B (i, j, k)        |')
print('| 5. Mencari Vektor A + B              |')
print('| 6. Mencari Vektor A - B              |')
print('| 7. Mencari Vektor |A| + |B|          |')
print("| 8. Mencari Vektor |A| - |B|          |")
print('|--------------------------------------|')
pilihan = int(input("Masukkan Pilihan : "))
if (pilihan == 1):
    print("Rumus Vektor 2D : B - A")
    print("Masukan titik A : ")
    x1 = int(input("Masukkan x1 : "))
    y1 = int(input("Masukkan y1 : "))
    x2 = int(input("Masukkan x2 : "))
    y2 = int(input("Masukkan y2 : "))
    print(" ")
    print("Titik A : (", x1, ",", y1, ")")
    print("Titik B : (", x2, ",", y2, ")")
    hasil1 = x2 - x1
    hasil2 = y2 - y1
    print("Vektor 2D : (", hasil1, ",", hasil2, ")")

elif (pilihan == 2):
    print("Rumus Vektor 3D : B - A")
    print("Masukan titik A : ")
    x1 = int(input("Masukkan x1 : "))
    y1 = int(input("Masukkan y1 : "))
    z1 = int(input("Masukkan z1 : "))
    x2 = int(input("Masukkan x2 : "))
    y2 = int(input("Masukkan y2 : "))
    z2 = int(input("Masukkan z2 : "))
    print(" ")
    print("Titik A : (", x1, ",", y1, ",", z1, ")")
    print("Titik B : (", x2, ",", y2, ",", z2, ")")
    hasil1 = x2 - x1
    hasil2 = y2 - y1
    hasil3 = z2 - z1
    print("Vektor 3D : (", hasil1, ",", hasil2, ",", hasil3, ")")

elif (pilihan == 3):
    i = int(input("Masukkan i : "))
    j = int(input("Masukkan j : "))
    k = int(input("Masukkan k : "))
    print(" ")
    print(" |A| = (", i, "+", j, "+", k, ")")
    ip = pow(i, 2)
    jp = pow(j, 2)
    kp = pow(k, 2)
    tambah = ip + jp + kp
    print(" |A| = √", tambah)
    print(" |A| = (", math.sqrt(tambah), ")")

elif (pilihan == 4):
    i = int(input("Masukkan i : "))
    j = int(input("Masukkan j : "))
    k = int(input("Masukkan k : "))
    print(" ")
    print(" |B| = (", i, "+", j, "+", k, ")")
    ip = pow(i, 2)
    jp = pow(j, 2)
    kp = pow(k, 2)
    tambah = ip + jp + kp
    print(" |B| = √", tambah)
    print(" |B| = (", math.sqrt(tambah), ")")

elif (pilihan == 5):
    i1 = int(input("Masukkan i-a : "))
    j1 = int(input("Masukkan j-a : "))
    k1 = int(input("Masukkan k-a : "))
    i2 = int(input("Masukkan i-b : "))
    j2 = int(input("Masukkan j-b : "))
    k2 = int(input("Masukkan k-b : "))
    print(" ")
    print(" |A+B| = (", i1, ",", j1, ",", k1, ") + (", i2, ",", j2, ",", k2, ")")
    hasil_i = i1 + i2
    hasil_j = j1 + j2
    hasil_k = k1 + k2
    print(" |A+B| = (", hasil_i, ",", hasil_j, ",", hasil_k, ")")

elif (pilihan == 6):
    i1 = int(input("Masukkan i-a : "))
    j1 = int(input("Masukkan j-a : "))
    k1 = int(input("Masukkan k-a : "))
    i2 = int(input("Masukkan i-b : "))
    j2 = int(input("Masukkan j-b : "))
    k2 = int(input("Masukkan k-b : "))
    print(" ")
    print(" |A-B| = (", i1, ",", j1, ",", k1, ") - (", i2, ",", j2, ",", k2, ")")
    hasil_i = i1 - i2
    hasil_j = j1 - j2
    hasil_k = k1 - k2
    print(" |A-B| = (", hasil_i, ",", hasil_j, ",", hasil_k, ")")

elif (pilihan == 7):
    i1 = int(input("Masukkan i-a : "))
    j1 = int(input("Masukkan j-a : "))
    k1 = int(input("Masukkan k-a : "))
    i2 = int(input("Masukkan i-b : "))
    j2 = int(input("Masukkan j-b : "))
    k2 = int(input("Masukkan k-b : "))
    print(" ")
    print(" |A| + |B| = (", i1, ",", j1, ",", k1, ") + (", i2, ",", j2, ",", k2, ")")
    hasil_1 = i1 + i2
    hasil_1_1 = pow(hasil_1, 2)
    hasil_2 = j1 + j2
    hasil_2_2 = pow(hasil_2, 2)
    hasil_3 = k1 + k2
    hasil_3_3 = pow(hasil_3, 2)
    akar = hasil_1_1 + hasil_2_2 + hasil_3_3
    hasil4 = math.sqrt(akar)
    print(" |A| = √", akar)
    print(" |A| + |B| = (", hasil4, ")")

elif (pilihan == 8):
    i1 = int(input("Masukkan i-a : "))
    j1 = int(input("Masukkan j-a : "))
    k1 = int(input("Masukkan k-a : "))
    i2 = int(input("Masukkan i-b : "))
    j2 = int(input("Masukkan j-b : "))
    k2 = int(input("Masukkan k-b : "))
    print(" ")
    print(" |A| - |B| = (", i1, ",", j1, ",", k1, ") - (", i2, ",", j2, ",", k2, ")")
    hasil_1 = i1 - i2
    hasil_1_1 = pow(hasil_1, 2)
    hasil_2 = j1 - j2
    hasil_2_2 = pow(hasil_2, 2)
    hasil_3 = k1 - k2
    hasil_3_3 = pow(hasil_3, 2)
    akar = hasil_1_1 + hasil_2_2 + hasil_3_3
    hasil4 = math.sqrt(akar)
    print(" |A| = √", akar)
    print(" |A| - |B| = (", hasil4, ")")

else:
  	print("\nPilihan anda salah/tidak ada di menu !!!\n")
