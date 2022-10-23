import math
tinggi, miring = input().split()
tinggi = float(tinggi)
miring = float(miring)
alas = math.sqrt(miring*miring-tinggi*tinggi)
keliling = tinggi + miring + alas
luas = 0.5*alas*tinggi
print("Alas =", round(alas), "cm")
print("Tinggi =", round(tinggi), "cm")
print("Keliling", round(keliling), "cm")
print("Luas =", round(luas), "cm^2\n")

bTinggi = input()
bMiring = input()
bTinggi = float(bTinggi)
bMiring = float(bMiring)
bAlas = math.sqrt(bMiring*bMiring-bTinggi+bTinggi)
bKeliling = bTinggi+bMiring+bAlas
bLuas = 0.5*bAlas*bTinggi
print("Alas =", round(bAlas), "cm")
print("Tinggi =", round(bTinggi), "cm")
print("Keliling =", round(bKeliling), "cm")
print("Luas =", round(bLuas), "cm^2")