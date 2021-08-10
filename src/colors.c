#include "colors.h"
#include <stdio.h>

const char* get_fg_ansi(ANSI_COLOR color) {
    switch (color) {
        case BLACK:          return "\x1b[30m";
        case RED:            return "\x1b[31m";
        case GREEN:          return "\x1b[32m";
        case YELLOW:         return "\x1b[33m";
        case BLUE:           return "\x1b[34m";
        case MAGENTA:        return "\x1b[35m";
        case CYAN:           return "\x1b[36m";
        case WHITE:          return "\x1b[37m";
        case RESET:          return "\x1b[0m";
        case BRIGHT_BLACK:   return "\x1b[30;1m";
        case BRIGHT_RED:     return "\x1b[31;1m";
        case BRIGHT_GREEN:   return "\x1b[32;1m";
        case BRIGHT_YELLOW:  return "\x1b[33;1m";
        case BRIGHT_BLUE:    return "\x1b[34;1m";
        case BRIGHT_MAGENTA: return "\x1b[35;1m";
        case BRIGHT_CYAN:    return "\x1b[36;1m";
        case BRIGHT_WHITE:   return "\x1b[37;1m";
    }
}

const char* get_bg_ansi(ANSI_COLOR color) {
    switch (color) {
        case BLACK:          return "\x1b[40m";
        case RED:            return "\x1b[41m";
        case GREEN:          return "\x1b[42m";
        case YELLOW:         return "\x1b[43m";
        case BLUE:           return "\x1b[44m";
        case MAGENTA:        return "\x1b[45m";
        case CYAN:           return "\x1b[46m";
        case WHITE:          return "\x1b[47m";
        case RESET:          return "\x1b[0m";
        case BRIGHT_BLACK:   return "\x1b[40;1m";
        case BRIGHT_RED:     return "\x1b[41;1m";
        case BRIGHT_GREEN:   return "\x1b[42;1m";
        case BRIGHT_YELLOW:  return "\x1b[43;1m";
        case BRIGHT_BLUE:    return "\x1b[44;1m";
        case BRIGHT_MAGENTA: return "\x1b[45;1m";
        case BRIGHT_CYAN:    return "\x1b[46;1m";
        case BRIGHT_WHITE:   return "\x1b[47;1m";
    }
}

void set_fg(ANSI_COLOR color) {
    printf("%s", get_fg_ansi(color));
}

void set_bg(ANSI_COLOR color) {
    printf("%s", get_bg_ansi(color));
}

void set_colors(ANSI_COLOR foreground, ANSI_COLOR background) {
    printf("%s%s", get_fg_ansi(foreground), get_bg_ansi(background));
}

void reset_fg() {
    printf("%s", get_fg_ansi(RESET));
}

void reset_bg() {
    printf("%s", get_bg_ansi(RESET));
}

void reset_all() {
    reset_fg();
    reset_bg();
}