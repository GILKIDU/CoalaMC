#include <CoalaMOD.h>

#include <stdio.h>

#pragma comment(lib, "CoalaMOD.lib")

#include <math.h>

int main() {

	double pi = 3.14159265358979323846;


	int px, py, pz;
	BlockID Ki = createBlock(BLOCK_STONE);
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double PI = 3.14159265358979323836;
	double radian = dir * PI / 180;
	BlockID En = createBlock(BLOCK_BEDROCK);
	int dx = -20 * sin(radian);
	int dz = 20 * cos(radian);
	BlockID Du = createWood(WOOD_JUNGLE);

	locateBlock(Ki, px + dx + 2, py + 1, pz + dz + 1);
	locateBlock(Ki, px + dx + 3, py + 1, pz + dz + 1);
	locateBlock(Ki, px + dx + 4, py + 1, pz + dz + 1);
	locateBlock(Ki, px + dx + 5, py + 1, pz + dz + 1);
	locateBlock(Ki, px + dx + 6, py + 1, pz + dz + 1);
	locateBlock(Ki, px + dx + 7, py + 1, pz + dz + 1);
	locateBlock(Ki, px + dx + 2, py + 2, pz + dz + 2);
	locateBlock(Ki, px + dx + 3, py + 2, pz + dz + 2);
	locateBlock(Ki, px + dx + 4, py + 2, pz + dz + 2);
	locateBlock(Ki, px + dx + 5, py + 2, pz + dz + 2);
	locateBlock(Ki, px + dx + 6, py + 2, pz + dz + 2);
	locateBlock(Ki, px + dx + 7, py + 2, pz + dz + 2);
	locateBlock(Ki, px + dx + 2, py + 3, pz + dz + 3);
	locateBlock(Ki, px + dx + 3, py + 3, pz + dz + 3);
	locateBlock(Ki, px + dx + 4, py + 3, pz + dz + 3);
	locateBlock(Ki, px + dx + 5, py + 3, pz + dz + 3);
	locateBlock(Ki, px + dx + 6, py + 3, pz + dz + 3);
	locateBlock(Ki, px + dx + 7, py + 3, pz + dz + 3);

	locateBlock(Ki, px + dx + 2, py + 1, pz + dz + 6 + 3);
	locateBlock(Ki, px + dx + 3, py + 1, pz + dz + 6 + 3);
	locateBlock(Ki, px + dx + 4, py + 1, pz + dz + 6 + 3);
	locateBlock(Ki, px + dx + 5, py + 1, pz + dz + 6 + 3);
	locateBlock(Ki, px + dx + 6, py + 1, pz + dz + 6 + 3);
	locateBlock(Ki, px + dx + 7, py + 1, pz + dz + 6 + 3);
	locateBlock(Ki, px + dx + 2, py + 2, pz + dz + 6 + 2);
	locateBlock(Ki, px + dx + 3, py + 2, pz + dz + 6 + 2);
	locateBlock(Ki, px + dx + 4, py + 2, pz + dz + 6 + 2);
	locateBlock(Ki, px + dx + 5, py + 2, pz + dz + 6 + 2);
	locateBlock(Ki, px + dx + 6, py + 2, pz + dz + 6 + 2);
	locateBlock(Ki, px + dx + 7, py + 2, pz + dz + 6 + 2);
	locateBlock(Ki, px + dx + 2, py + 3, pz + dz + 6 + 1);
	locateBlock(Ki, px + dx + 3, py + 3, pz + dz + 6 + 1);
	locateBlock(Ki, px + dx + 4, py + 3, pz + dz + 6 + 1);
	locateBlock(Ki, px + dx + 5, py + 3, pz + dz + 6 + 1);
	locateBlock(Ki, px + dx + 6, py + 3, pz + dz + 6 + 1);
	locateBlock(Ki, px + dx + 7, py + 3, pz + dz + 6 + 1);

	locateBlock(Ki, px + dx + 8, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 8, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 8, py + 3, pz + dz + 6);
	locateBlock(Ki, px + dx + 9, py + 2, pz + dz + 4);
	locateBlock(Ki, px + dx + 9, py + 2, pz + dz + 5);
	locateBlock(Ki, px + dx + 9, py + 2, pz + dz + 6);
	locateBlock(Ki, px + dx + 10, py + 1, pz + dz + 4);
	locateBlock(Ki, px + dx + 10, py + 1, pz + dz + 5);
	locateBlock(Ki, px + dx + 10, py + 1, pz + dz + 6);

	locateBlock(Ki, px + dx - 1, py + 1, pz + dz + 4);
	locateBlock(Ki, px + dx - 1, py + 1, pz + dz + 5);
	locateBlock(Ki, px + dx - 1, py + 1, pz + dz + 6);
	locateBlock(Ki, px + dx, py + 2, pz + dz + 4);
	locateBlock(Ki, px + dx, py + 2, pz + dz + 5);
	locateBlock(Ki, px + dx, py + 2, pz + dz + 6);
	locateBlock(Ki, px + dx + 1, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 1, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 1, py + 3, pz + dz + 6);

	locateBlock(Ki, px + dx + 2, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 2, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 2, py + 3, pz + dz + 6);

	locateBlock(Ki, px + dx + 3, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 3, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 3, py + 3, pz + dz + 6);

	locateBlock(Ki, px + dx + 4, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 4, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 4, py + 3, pz + dz + 6);

	locateBlock(Ki, px + dx + 5, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 5, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 5, py + 3, pz + dz + 6);

	locateBlock(Ki, px + dx + 6, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 6, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 6, py + 3, pz + dz + 6);

	locateBlock(Ki, px + dx + 7, py + 3, pz + dz + 4);
	locateBlock(Ki, px + dx + 7, py + 3, pz + dz + 5);
	locateBlock(Ki, px + dx + 7, py + 3, pz + dz + 6);

	locateBlock(En, px + dx + 2, py + 4, pz + dz + 3);
	locateBlock(En, px + dx + 7, py + 4, pz + dz + 3);

	locateBlock(En, px + dx + 2, py + 4, pz + dz + 5);
	locateBlock(En, px + dx + 7, py + 4, pz + dz + 5);

	locateBlock(En, px + dx + 2, py + 4, pz + dz + 7);
	locateBlock(En, px + dx + 7, py + 4, pz + dz + 7);


	locateBlock(En, px + dx + 2, py + 5, pz + dz + 3);
	locateBlock(En, px + dx + 7, py + 5, pz + dz + 3);


	locateBlock(En, px + dx + 2, py + 5, pz + dz + 5);
	locateBlock(En, px + dx + 7, py + 5, pz + dz + 5);
	locateBlock(En, px + dx + 2, py + 5, pz + dz + 7);
	locateBlock(En, px + dx + 7, py + 5, pz + dz + 7);

	locateBlock(En, px + dx + 2, py + 6, pz + dz + 3);
	locateBlock(En, px + dx + 7, py + 6, pz + dz + 3);

	locateBlock(En, px + dx + 2, py + 6, pz + dz + 5);
	locateBlock(En, px + dx + 7, py + 6, pz + dz + 5);

	locateBlock(En, px + dx + 2, py + 6, pz + dz + 7);
	locateBlock(En, px + dx + 7, py + 6, pz + dz + 7);

	locateBlock(Du, px + dx + 2, py + 7, pz + dz + 4);
	locateBlock(Du, px + dx + 2, py + 7, pz + dz + 5);
	locateBlock(Du, px + dx + 2, py + 7, pz + dz + 6);
	locateBlock(Du, px + dx + 2, py + 7, pz + dz + 3);
	locateBlock(Du, px + dx + 2, py + 7, pz + dz + 7);
	locateBlock(Du, px + dx + 3, py + 7, pz + dz + 4);
	locateBlock(Du, px + dx + 3, py + 7, pz + dz + 5);
	locateBlock(Du, px + dx + 3, py + 7, pz + dz + 6);
	locateBlock(Du, px + dx + 3, py + 7, pz + dz + 3);
	locateBlock(Du, px + dx + 3, py + 7, pz + dz + 7);
	locateBlock(Du, px + dx + 4, py + 7, pz + dz + 4);
	locateBlock(Du, px + dx + 4, py + 7, pz + dz + 5);
	locateBlock(Du, px + dx + 4, py + 7, pz + dz + 6);
	locateBlock(Du, px + dx + 4, py + 7, pz + dz + 3);
	locateBlock(Du, px + dx + 4, py + 7, pz + dz + 7);
	locateBlock(Du, px + dx + 5, py + 7, pz + dz + 4);
	locateBlock(Du, px + dx + 5, py + 7, pz + dz + 5);
	locateBlock(Du, px + dx + 5, py + 7, pz + dz + 6);
	locateBlock(Du, px + dx + 5, py + 7, pz + dz + 3);
	locateBlock(Du, px + dx + 5, py + 7, pz + dz + 7);
	locateBlock(Du, px + dx + 6, py + 7, pz + dz + 4);
	locateBlock(Du, px + dx + 6, py + 7, pz + dz + 5);
	locateBlock(Du, px + dx + 6, py + 7, pz + dz + 6);
	locateBlock(Du, px + dx + 6, py + 7, pz + dz + 3);
	locateBlock(Du, px + dx + 6, py + 7, pz + dz + 7);
	locateBlock(Du, px + dx + 7, py + 7, pz + dz + 4);
	locateBlock(Du, px + dx + 7, py + 7, pz + dz + 5);
	locateBlock(Du, px + dx + 7, py + 7, pz + dz + 6);
	locateBlock(Du, px + dx + 7, py + 7, pz + dz + 3);
	locateBlock(Du, px + dx + 7, py + 7, pz + dz + 7);

	locateBlock(Du, px + dx + 3, py + 8, pz + dz + 4);
	locateBlock(Du, px + dx + 3, py + 8, pz + dz + 5);
	locateBlock(Du, px + dx + 3, py + 8, pz + dz + 6);
	locateBlock(Du, px + dx + 4, py + 8, pz + dz + 4);
	locateBlock(Du, px + dx + 4, py + 8, pz + dz + 5);
	locateBlock(Du, px + dx + 4, py + 8, pz + dz + 6);
	locateBlock(Du, px + dx + 5, py + 8, pz + dz + 4);
	locateBlock(Du, px + dx + 5, py + 8, pz + dz + 5);
	locateBlock(Du, px + dx + 5, py + 8, pz + dz + 6);
	locateBlock(Du, px + dx + 6, py + 8, pz + dz + 4);
	locateBlock(Du, px + dx + 6, py + 8, pz + dz + 5);
	locateBlock(Du, px + dx + 6, py + 8, pz + dz + 6);
	locateBlock(Du, px + dx + 4, py + 9, pz + dz + 5);
	locateBlock(Du, px + dx + 5, py + 9, pz + dz + 5);
	return 0;
}