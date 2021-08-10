#pragma once

typedef enum {
    BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE, RESET,
    BRIGHT_BLACK, BRIGHT_RED, BRIGHT_GREEN, BRIGHT_YELLOW, BRIGHT_BLUE,
    BRIGHT_MAGENTA, BRIGHT_CYAN, BRIGHT_WHITE
} ANSI_COLOR;

const char* get_fg_ansi(ANSI_COLOR fg);
const char* get_bg_ansi(ANSI_COLOR bg);

void set_fg(ANSI_COLOR color);
void set_bg(ANSI_COLOR color);
void set_colors(ANSI_COLOR foreground, ANSI_COLOR background);
void reset_fg();
void reset_bg();
void reset_all();