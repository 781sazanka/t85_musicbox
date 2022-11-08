#ifndef SHEET_H
#define SHEET_H
/*
header
	14bit : BPM*minNote
	1bit : loop
	1bit : pause

body
	1bit : 音量 50%:0 100%:1
	1bit : 波形 50%:0 25%:1
	1bit : 減衰 on:0 off:1
	3bit : オクターブ(0~7) o0:000 ~ o7:111
	4bit : 音高(0~11)+休符(12) c:0000 ~ b:1011 r:1100
	6bit : 音価(min:1/16?) min*1:000000 ~ min*64:111111
*/
static const uint16_t PROGMEM koyu[]={
	8386,
	0,21763,21763,21763,22275,21763,21763,21763,22275,21763,21955,21509,21634,21762,22285,21827,21827,21829,21827,21827,21763,21763,21763,21763,21635,21635,21507,21635,22275,21955,
	0,0
};
static const uint16_t PROGMEM kyomu[]={
	7040,
	0,21761,22209,22081,21953,21953,21889,21761,21889,22081,21953,21889,21953,22661,22529,22213,22081,22085,21953,22087,22219,22273,22209,22981,22209,22917,22209,22787,22657,22529,22661,22209,22081,22529,22785,22977,22913,22657,22209,22081,22219,22273,22209,22981,22209,22917,22209,22787,22657,22529,22661,21953,22081,22529,22785,22977,23105,23233,22913,22657,22795,22785,22913,22977,22977,22977,22977,22977,22913,22785,22913,22667,22209,22657,22785,22785,22785,22785,22785,22657,22529,22657,22219,22273,22209,22017,22081,22529,22785,22661,22529,22145,22209,22657,22913,23105,22977,22913,22977,23237,23104,23232,22789,22656,22784,22213,22080,22208,21767,21899,22273,22209,22981,22209,22917,22209,22787,22657,22529,22661,22209,22081,22529,22785,22977,22913,22657,22209,22081,22219,22273,22209,22981,22209,22917,22209,22787,22657,22529,22661,21953,22081,22529,22785,22977,23105,23233,22913,22657,22795,23299,
	0,21263,21185,21635,21633,21505,21763,21761,21583,21639,20687,20737,20931,20929,20609,20931,20929,20481,20931,20929,20161,20931,20929,20033,20739,20737,20609,21059,21057,19905,20609,21057,21185,20929,20865,21057,21185,20737,20931,20929,20609,20931,20929,20481,20931,20929,20161,20867,20865,20033,20739,20737,20161,20609,21057,21185,20737,20929,21185,20929,20743,20037,20485,20739,20165,20869,21059,20483,20929,20611,21059,20609,19905,20609,21057,21185,20929,20865,21057,20865,20033,20481,20737,21057,20609,20865,21057,20481,20161,20609,21057,21185,20737,20929,21185,20737,20047,20495,20175,20737,20931,20929,20609,20931,20929,20481,20931,20929,20161,20931,20929,20033,20739,20737,20609,21059,21057,19905,20609,21057,21185,20929,20865,21057,21185,20737,20931,20929,20609,20931,20929,20481,20931,20929,20161,20867,20865,20033,20739,20737,20161,20609,21057,21185,20737,20929,21185,20929,20743,
	0,0
};
static const uint16_t PROGMEM yasu[]={
	6400,
	0,20931,21955,21827,21763,21571,21635,22087,21187,22211,22083,21955,21891,21955,22535,22659,22531,22211,22083,21955,21827,21763,21635,22663,22215,22991,
	0,19463,18887,18767,18887,19143,18447,19719,19655,19599,
	0,0
};
static const uint16_t PROGMEM mahiro[]={
	7680,
	0,52495,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,52225,52481,52673,52929,53249,52929,52673,52481,
	0,28111,26687,26943,26687,26759,
	0,20175,
	0,0
};
#endif
