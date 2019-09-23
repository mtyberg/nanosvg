#ifndef NANOSVGEG_H
#define NANOSVGEG_H

typedef struct {
	unsigned char r, g, b, a;
} EG_PIXEL;

typedef struct {
	int	Width;
	int	Height;
	EG_PIXEL *PixelData;
	bool	HasAlpha;
} EG_IMAGE;

#endif
