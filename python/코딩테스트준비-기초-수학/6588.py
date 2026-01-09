import sys
def generate_primes(limit):
    sieve = [True] * (limit + 1)  # 0부터 limit까지의 배열
    sieve[0] = sieve[1] = False  # 0과 1은 소수가 아님

    for i in range(2, int(limit**0.5) + 1):  # 2부터 √limit까지 반복
        if sieve[i]:  # i가 소수인 경우
            for multiple in range(i * i, limit + 1, i):  # i의 배수들을 False로 설정
                sieve[multiple] = False

    return sieve

# 1부터 1,000,000까지의 소수 리스트 생성
primes = generate_primes(1_000_000)

while True:
    a=0
    n = int(sys.stdin.readline())
    if n == 0:
        break
    else:
        for i in range(n-3,2,-2):
            if primes[i] and primes[n-i]:
                print(f"{n} = {n-i} + {i}")
                break

        


