/*****************************************************************************
 * importer.h:
 *****************************************************************************
 * Copyright (C) 2010-2014 L-SMASH project
 *
 * Authors: Takashi Hirata <silverfilain@gmail.com>
 * Contributors: Yusuke Nakamura <muken.the.vfrmaniac@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *****************************************************************************/

/* This file is available under an ISC license. */

#ifndef LSMASH_IMPORTER_H
#define LSMASH_IMPORTER_H

/***************************************************************************
    importer
***************************************************************************/

#ifndef LSMASH_IMPORTER_INTERNAL

typedef void importer_t;

/* importing functions */
importer_t *lsmash_importer_open( const char *identifier, const char *format );
void lsmash_importer_close( importer_t *importer );
int lsmash_importer_get_access_unit( importer_t *importer, uint32_t track_number, lsmash_sample_t *buffered_sample );
uint32_t lsmash_importer_get_last_delta( importer_t *importer, uint32_t track_number );
uint32_t lsmash_importer_get_track_count( importer_t *importer );
lsmash_summary_t *lsmash_duplicate_summary( importer_t *importer, uint32_t track_number );

#endif /* #ifndef LSMASH_IMPORTER_INTERNAL */

#endif /* #ifndef LSMASH_IMPORTER_H */
