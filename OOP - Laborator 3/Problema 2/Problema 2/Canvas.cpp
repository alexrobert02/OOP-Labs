#define _CRT_SECURE_NO_WARNINGS
#include "Canvas.h"
#include <cstdlib>
#include <string.h>
#include <stdarg.h>
#include <cstdio>

Canvas::Canvas(int width, int height) {
    this->width  = width;
    this->height = height;
    Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    for (int i = x - ray; i <= x + ray; i++) {
        for (int j = y - ray; j <= y + ray; j++) {
            if ((int) sqrt((i - x) * (i - x) + (j - y) * (j - y)) == (int) sqrt(ray * ray)) {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    for (int i = x - ray; i <= x + ray; i++) {
        for (int j = y - ray; j <= y + ray; j++) {
            if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray) {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left; i <= right; i++) {
        for (int j = top; j <= bottom; j++) {
            if (i == left || i == right || j == top || j == bottom) {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left; i <= right; i++) {
        for (int j = top; j <= bottom; j++) {
            SetPoint(i, j, ch);
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch) {
    canvas[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int D  = 2 * dy - dx;
    int y  = y1;
    for (int x = x1; x <= x2; x++) {
        SetPoint(x, y, ch);
        if (D > 0) {
            y++;
            D = D - 2 * dx;
        }
        D = D + 2 * dy;
    }
}

void Canvas::Print() {
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            printf("%c ", canvas[i][j]);
        }
        printf("\n");
    }
}

void Canvas::Clear() {
    memset(canvas, ' ', sizeof(canvas));
}