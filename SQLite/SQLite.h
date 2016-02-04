@import Foundation;

FOUNDATION_EXPORT double SQLiteVersionNumber;
FOUNDATION_EXPORT const unsigned char SQLiteVersionString[];

#import <SQLite/SQLite-Bridging.h>

SQLITE_API int SQLITE_STDCALL sqlite3_key(
                                          sqlite3 *db,                   /* Database to be rekeyed */
                                          const void *pKey, int nKey     /* The key */
);
SQLITE_API int SQLITE_STDCALL sqlite3_key_v2(
                                             sqlite3 *db,                   /* Database to be rekeyed */
                                             const char *zDbName,           /* Name of the database */
                                             const void *pKey, int nKey     /* The key */
);

/*
 ** Change the key on an open database.  If the current database is not
 ** encrypted, this routine will encrypt it.  If pNew==0 or nNew==0, the
 ** database is decrypted.
 **
 ** The code to implement this API is not available in the public release
 ** of SQLite.
 */
SQLITE_API int SQLITE_STDCALL sqlite3_rekey(
                                            sqlite3 *db,                   /* Database to be rekeyed */
                                            const void *pKey, int nKey     /* The new key */
);
SQLITE_API int SQLITE_STDCALL sqlite3_rekey_v2(
                                               sqlite3 *db,                   /* Database to be rekeyed */
                                               const char *zDbName,           /* Name of the database */
                                               const void *pKey, int nKey     /* The new key */
);

/*
 ** Specify the activation key for a SEE database.  Unless 
 ** activated, none of the SEE routines will work.
 */
SQLITE_API void SQLITE_STDCALL sqlite3_activate_see(
                                                    const char *zPassPhrase        /* Activation phrase */
);

