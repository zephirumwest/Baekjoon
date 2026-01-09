import sys

def solve():
    # 첫 번째 줄에서 연산 개수(n)를 읽어옵니다.
    line = sys.stdin.readline()
    if not line:
        return

    try:
        # strip()으로 불필요한 공백/개행 제거 후 정수로 변환
        n = int(line.strip())
    except ValueError:
        print("Error: 첫 번째 줄은 정수여야 합니다.")
        return

    # n개의 연산을 처리합니다.
    for i in range(n):
        line = sys.stdin.readline()
        if not line:
            break

        # 입력 줄 정리 및 분리
        parts = line.strip().split()

        # 입력 형식이 올바르지 않으면 건너뜁니다.
        if len(parts) != 3:
            print(f"Error (줄 {i+1}): 잘못된 형식입니다. (예: 10 add 5)")
            continue

        try:
            operand1 = int(parts[0])
            operator = parts[1]
            operand2 = int(parts[2])
        except ValueError:
            print(f"Error (줄 {i+1}): 피연산자는 정수여야 합니다.")
            continue

        # 연산 수행
        try:
            if operator == 'add':
                print(operand1 + operand2)
            elif operator == 'sub':
                print(operand1 - operand2)
            elif operator == 'mul':
                print(operand1 * operand2)
            elif operator == 'div':
                if operand2 == 0:
                    print(f"Error (줄 {i+1}): 0으로 나눌 수 없습니다.")
                    continue
                # 정수 나눗셈
                print(operand1 // operand2)
            else:
                # 알 수 없는 연산자 처리
                print(f"Error (줄 {i+1}): 알 수 없는 연산자 '{operator}'입니다.")
        except Exception as e:
            print(f"Error (줄 {i+1}): 계산 중 오류 발생 - {e}")

if __name__ == "__main__":
    solve()