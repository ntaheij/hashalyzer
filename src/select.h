/*
 *             hashalyzer
 *    hash identification program.
 *
 *  by Hashalyzer
 *  https://ntaheij.dev  <nt@ntaheij.dev>
 *
 *  select.h
 *
 */

#ifndef SELECT_H
#define SELECT_H

#define RED "\x1b[31m"
#define RESET "\x1b[0m"
void list(void);
void sel(int length, const char *charset);

#endif
