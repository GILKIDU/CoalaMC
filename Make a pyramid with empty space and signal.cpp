#define _CRT_SECURE_NO_WARNINGS
#define SWAP(x,y) {int t=x; x=y; y=t;}
#include"pch.h"
#include<stdio.h>
#include<CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main()
{
	BlockID Enk = createBlock(BLOCK_STONE);
	int sx, sy, sz, ex, ey, ez, sd;
	int a, b, c, d, e, f, g;
	int x, y, z;
	scanf("%d %d %d %d %d %d", &sx, &sy, &sz, &ex, &ey, &ez);
	if (sx - ex > 0) a = sx - ex;
	else a = ex - sx;
	if (sy - ey > 0) { b = sy - ey; }
	else b = ey - sy;
	if (sz - ez > 0) c = sz - ez;
	else c = ez - sz;
	if (a > b) SWAP(a, b);
	if (b > c) SWAP(b, c);
	if (a > b) SWAP(a, b);
	sd = a / 2;
	x = (sx + ex) / 2;
	z = (sz + ez) / 2;
	e = x; f = sd; g = z;
	y = (sy + ey) / 2 - f;
	d = y;
	while (y < d + 2 * f) {
		z = g - sd + 1;
		x = e - sd;

		while (z < g + sd) {
			locateBlock(Enk, x, y, z);
			z++;
			
		}
		z = g - sd + 1;
		x = e + sd;

		while (z < g + sd) {
			locateBlock(Enk, x, y, z);
			z++;
		}
		z = g - sd;
		x = e - sd + 1;

		while (x < e + sd) {
			locateBlock(Enk, x, y, z);
			x++;
		}
		z = g + sd;
		x = e - sd + 1;
		while (x < e + sd) {
			locateBlock(Enk, x, y, z);
			x++;
		}

		x = e; z = g;
		locateBlock(Enk, x - (sd - 1), y, z + (sd - 1));
		locateBlock(Enk, x - (sd - 1), y, z - (sd - 1));
		locateBlock(Enk, x + (sd - 1), y, z + (sd - 1));
		locateBlock(Enk, x + (sd - 1), y, z - (sd - 1));
		y = y + 2; sd--;
	}
	return 0;

}
