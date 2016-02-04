#ifndef C_EVIDENCES_H
#define C_EVIDENCES_H

#include "../../crypto_ops/crypto/c_encryption.hpp"
#include "c_token.hpp"
/***
 * Class that provide evidences methods
 * for ensuring transactions security
 */

class c_evidences
{
public:
    c_evidences(c_ed25519 &ed);
    bool find_token_cheater(const c_token &, const c_token &);

private:
    c_ed25519 &m_edsigner;
};

#endif // C_EVIDENCES_H
