# 2stager-poc

This is a proof of concept (PoC) for a two-staged payload.

- The main payload is stored in `payload.dll`.
- The payload is executed by `stager.exe`.
- This approach aims to have a lower detection rate.
-`trigger.exe` triggers Windows defender to serve as a proof.
