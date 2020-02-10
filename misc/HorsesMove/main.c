#include <stdio.h>
#include <stdlib.h>

const int He = 8;
const int Wi = 8;

// 1
int routes(int r, int c, int map[He][Wi]) {
  if (r == 0 || c == 0)
	return 1;
  else
	return (map[r][c] == 1) ?
	  routes(r - 1, c, map) + routes(r, c - 1, map) :
	  0;
}

// 2
int possible[][2] = {
  {-2, 1}, {-1, 2}, {1, 2}, {2, 1},
  {2, -1}, {1, -2}, {-1, -2}, {-2, -1}
};

int isPossible(int desk[He][Wi], int x, int y){
  return x >= 0 && x < He && y >= 0 && y < Wi && desk[x][y] == 0;
}

void initDesk(int desk[He][Wi]) {
  for (int i = 0; i < He; i++)
	for(int j = 0; j < Wi; j++)
	  desk[i][j] = 0;
}

void printDesk(int desk[He][Wi]){
  printf("\n");
  for (int i = 0; i < He; i++) {
	for(int j = 0; j < Wi; j++)
	  printf("%3d ", desk[i][j]);
	puts("");
  }
}

int knightMove(int desk[He][Wi], int currentX, int currentY, int move) {
  int nextX, nextY;
  int maxMoves = He * Wi - 1;
  desk[currentX][currentY] = move;
  if (move > maxMoves) return 1;

  for (int i = 0; i < 7; i++) {
	nextX = currentX + possible[i][1];
	nextY = currentY + possible[i][0];
	if (isPossible(desk, nextX, nextY) && knightMove(desk, nextX,nextY, move + 1))
	  return 1;
  }

  desk[currentX][currentY] = 0;
  return 0;
}

int recBinSrch(int* arr, int start, int end, int value) {
  int mid = (start + end) / 2;
  if (arr[mid] == value) return mid;
  if (start < end) {
	if (arr[mid] < value)
	  return recBinSrch(arr, mid + 1, end, value);
	else
	  return recBinSrch(arr, start, mid, value);
  } else {
	return -1;
  }
}

int main(int argc, const char** argv) {
  int desk[He][Wi];
  int maxMoves = He * Wi - 1;

  initDesk(desk);
  knightMove(desk, 1,0,1);
  printDesk(desk);

  return 0;
}