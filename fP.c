//Sarah Cox (902958147)

const unsigned short fP[625] =
{
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x07bdd, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00836, 0x019b8, 0x077bd, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x06716, 0x01e5d, 0x0265e, 
0x06f79, 0x035ad, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x0529d, 0x07bdf, 0x00000, 0x00000, 
0x00000, 0x07bdb, 0x0227d, 0x03abc, 0x0117c, 0x0121b, 0x07bde, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x05ebf, 0x0421e, 0x04a5f, 0x02975, 0x00000, 0x00000, 0x00800, 0x07bbf, 0x0225e, 0x01e3c, 
0x00c89, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x0265c, 0x01f7f, 0x03bbf, 0x016bb, 0x00abc, 0x00400, 
0x00000, 0x00000, 0x0229f, 0x01e3f, 0x01cd0, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x01eff, 0x00699, 
0x0127a, 0x04f5f, 0x03edc, 0x04b1e, 0x00615, 0x00400, 0x00000, 0x00000, 0x0463b, 0x00827, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00800, 0x0069d, 0x03edf, 0x0329c, 0x0433e, 0x0471e, 0x0327b, 0x02a78, 
0x00e9a, 0x0133d, 0x00000, 0x04a1a, 0x02d72, 0x00001, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00001, 0x00a16, 0x0010f, 0x0329f, 
0x0221c, 0x0473f, 0x04b1e, 0x0323c, 0x042bd, 0x008d0, 0x00194, 0x00800, 0x0531d, 0x01db5, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x012da, 0x0127c, 0x0369f, 0x03a9f, 0x03ebf, 0x01555, 0x025b9, 0x01534, 0x025bc, 
0x0191a, 0x02535, 0x01cd1, 0x036bd, 0x021d9, 0x00cc9, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00400, 0x01b3f, 0x001b2, 0x019fe, 0x0199c, 
0x01d9a, 0x0261b, 0x01554, 0x01977, 0x004f7, 0x02518, 0x020f4, 0x02113, 0x019dd, 0x01db8, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00001, 0x01d33, 0x0108a, 0x00000, 
0x00000, 0x00071, 0x02518, 0x00049, 0x01179, 0x01598, 0x01134, 0x00cf2, 0x04b1f, 0x0535f, 
0x0361e, 0x03dfd, 0x01cf8, 0x010d5, 0x0150f, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x01488, 0x02518, 0x01514, 0x00005, 0x0529f, 0x0319d, 0x031bd, 0x04f5f, 
0x0535f, 0x042de, 0x02a3b, 0x0219a, 0x039fe, 0x04a7e, 0x04a3e, 0x03ddc, 0x00400, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x025ba, 0x00cf4, 
0x00cf3, 0x03dfd, 0x03dfd, 0x0529e, 0x039be, 0x0359e, 0x0295a, 0x02d78, 0x0295a, 0x0421e, 
0x05afc, 0x0319a, 0x02d57, 0x00020, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x042ff, 0x01116, 0x00d78, 0x03ddf, 0x0633e, 0x06b7e, 0x05ade, 
0x04a7d, 0x03199, 0x02955, 0x02537, 0x02d78, 0x02d53, 0x01cf3, 0x02516, 0x0359c, 0x02510, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00001, 
0x00cf2, 0x00021, 0x04e7f, 0x04e5d, 0x03dfa, 0x0675e, 0x0779c, 0x05ab7, 0x05af6, 0x06b5b, 
0x05273, 0x03179, 0x039bd, 0x0317a, 0x03599, 0x03d7f, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x035bf, 0x02d7b, 0x02d79, 0x02d7b, 
0x02919, 0x04610, 0x04a31, 0x0292e, 0x0354f, 0x041b6, 0x03179, 0x03dbe, 0x03ddc, 0x03179, 
0x06b38, 0x05294, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x06f5a, 0x06b5a, 0x0739c, 0x077bd, 0x03996, 0x02d56, 0x05edd, 0x0739a, 0x020f0, 0x06f9b, 
0x02d35, 0x03198, 0x02d3d, 0x06f7b, 0x06339, 0x04e92, 0x018ac, 0x00c69, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x05ab5, 0x02118, 0x020f5, 0x06b59, 0x077db, 0x0779c, 
0x06b38, 0x0292f, 0x05ef5, 0x02917, 0x06b1c, 0x06f7b, 0x077bd, 0x0739c, 0x05279, 0x02d51, 
0x01489, 0x00845, 0x00423, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x01ced, 
0x018d0, 0x01cf3, 0x02536, 0x041fa, 0x06f5b, 0x06f3a, 0x06b39, 0x06f5a, 0x06f7a, 0x0739b, 
0x0777d, 0x05afa, 0x02933, 0x02950, 0x01088, 0x00424, 0x00001, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00424, 0x00425, 0x0108a, 0x014ad, 0x01cf0, 0x02533, 
0x01cf3, 0x020f5, 0x020f8, 0x020f8, 0x01d12, 0x02111, 0x0250f, 0x01489, 0x00845, 0x00423, 
0x00001, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00424, 0x01067, 0x01089, 0x0108a, 0x0108b, 0x0108c, 0x014ac, 0x01089, 
0x00c46, 0x00825, 0x00002, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00000, 0x00021, 
0x00423, 0x00423, 0x00424, 0x00424, 0x00844, 0x00000, 0x00421, 0x00000, 0x00000, 0x00000, 
0x00000, 0x00000, 0x00000, 0x00000, 0x00000
};