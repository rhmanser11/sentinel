# Sentinel - Reading Buffer

## Leak Lab result

- Bytes leaked: 1,600,000,000 (200,000 buffers x 1000 doubles x 8 bytes)
- Source: new double[capacity] inside ReadingBuffer::init
- Cause: release() was never called, so the heap memory was never freed
- Task Manager before fix: about 819 MB
- Task Manager after adding buf.release();: .5 MB
- After the fix the leak disappeared