


/*----------------------------------------------------------
// Decoder Ring for DatapathWorkerThreadStart
// [data][%p] Worker start
// QuicTraceLogInfo(
        DatapathWorkerThreadStart,
        "[data][%p] Worker start",
        ProcContext);
// arg2 = arg2 = ProcContext = arg2
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathWorkerThreadStart,
    TP_ARGS(
        const void *, arg2), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathWorkerThreadStop
// [data][%p] Worker stop
// QuicTraceLogInfo(
        DatapathWorkerThreadStop,
        "[data][%p] Worker stop",
        ProcContext);
// arg2 = arg2 = ProcContext = arg2
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathWorkerThreadStop,
    TP_ARGS(
        const void *, arg2), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathResolveHostNameFailed
// [%p] Couldn't resolve hostname '%s' to an IP address
// QuicTraceLogError(
        DatapathResolveHostNameFailed,
        "[%p] Couldn't resolve hostname '%s' to an IP address",
        Datapath,
        HostName);
// arg2 = arg2 = Datapath = arg2
// arg3 = arg3 = HostName = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathResolveHostNameFailed,
    TP_ARGS(
        const void *, arg2,
        const char *, arg3), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_string(arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for LibraryErrorStatus
// [ lib] ERROR, %u, %s.
// QuicTraceEvent(
            LibraryErrorStatus,
            "[ lib] ERROR, %u, %s.",
            Status,
            "kqueue() failed");
// arg2 = arg2 = Status = arg2
// arg3 = arg3 = "kqueue() failed" = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, LibraryErrorStatus,
    TP_ARGS(
        unsigned int, arg2,
        const char *, arg3), 
    TP_FIELDS(
        ctf_integer(unsigned int, arg2, arg2)
        ctf_string(arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for AllocFailure
// Allocation of '%s' failed. (%llu bytes)
// QuicTraceEvent(
            AllocFailure,
            "Allocation of '%s' failed. (%llu bytes)",
            "CXPLAT_DATAPATH",
            DatapathLength);
// arg2 = arg2 = "CXPLAT_DATAPATH" = arg2
// arg3 = arg3 = DatapathLength = arg3
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, AllocFailure,
    TP_ARGS(
        const char *, arg2,
        unsigned long long, arg3), 
    TP_FIELDS(
        ctf_string(arg2, arg2)
        ctf_integer(uint64_t, arg3, arg3)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathErrorStatus
// [data][%p] ERROR, %u, %s.
// QuicTraceEvent(
            DatapathErrorStatus,
            "[data][%p] ERROR, %u, %s.",
            Binding,
            Status,
            "socket() failed");
// arg2 = arg2 = Binding = arg2
// arg3 = arg3 = Status = arg3
// arg4 = arg4 = "socket() failed" = arg4
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathErrorStatus,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3,
        const char *, arg4), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3, arg3)
        ctf_string(arg4, arg4)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathRecv
// [data][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!
// QuicTraceEvent(
        DatapathRecv,
        "[data][%p] Recv %u bytes (segment=%hu) Src=%!ADDR! Dst=%!ADDR!",
        SocketContext->Binding,
        (uint32_t)BytesTransferred,
        (uint32_t)BytesTransferred,
        CASTED_CLOG_BYTEARRAY(sizeof(*LocalAddr), LocalAddr),
        CASTED_CLOG_BYTEARRAY(sizeof(*RemoteAddr), RemoteAddr));
// arg2 = arg2 = SocketContext->Binding = arg2
// arg3 = arg3 = (uint32_t)BytesTransferred = arg3
// arg4 = arg4 = (uint32_t)BytesTransferred = arg4
// arg5 = arg5 = CASTED_CLOG_BYTEARRAY(sizeof(*LocalAddr), LocalAddr) = arg5
// arg6 = arg6 = CASTED_CLOG_BYTEARRAY(sizeof(*RemoteAddr), RemoteAddr) = arg6
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathRecv,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3,
        unsigned short, arg4,
        unsigned int, arg5_len,
        const void *, arg5,
        unsigned int, arg6_len,
        const void *, arg6), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3, arg3)
        ctf_integer(unsigned short, arg4, arg4)
        ctf_integer(unsigned int, arg5_len, arg5_len)
        ctf_sequence(char, arg5, arg5, unsigned int, arg5_len)
        ctf_integer(unsigned int, arg6_len, arg6_len)
        ctf_sequence(char, arg6, arg6, unsigned int, arg6_len)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathCreated
// [data][%p] Created, local=%!ADDR!, remote=%!ADDR!
// QuicTraceEvent(
        DatapathCreated,
        "[data][%p] Created, local=%!ADDR!, remote=%!ADDR!",
        Binding,
        CASTED_CLOG_BYTEARRAY(Config->LocalAddress ? sizeof(*Config->LocalAddress) : 0, Config->LocalAddress),
        CASTED_CLOG_BYTEARRAY(Config->RemoteAddress ? sizeof(*Config->RemoteAddress) : 0, Config->RemoteAddress));
// arg2 = arg2 = Binding = arg2
// arg3 = arg3 = CASTED_CLOG_BYTEARRAY(Config->LocalAddress ? sizeof(*Config->LocalAddress) : 0, Config->LocalAddress) = arg3
// arg4 = arg4 = CASTED_CLOG_BYTEARRAY(Config->RemoteAddress ? sizeof(*Config->RemoteAddress) : 0, Config->RemoteAddress) = arg4
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathCreated,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3_len,
        const void *, arg3,
        unsigned int, arg4_len,
        const void *, arg4), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3_len, arg3_len)
        ctf_sequence(char, arg3, arg3, unsigned int, arg3_len)
        ctf_integer(unsigned int, arg4_len, arg4_len)
        ctf_sequence(char, arg4, arg4, unsigned int, arg4_len)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathDestroyed
// [data][%p] Destroyed
// QuicTraceEvent(
                DatapathDestroyed,
                "[data][%p] Destroyed",
                Binding);
// arg2 = arg2 = Binding = arg2
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathDestroyed,
    TP_ARGS(
        const void *, arg2), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
    )
)



/*----------------------------------------------------------
// Decoder Ring for DatapathSend
// [data][%p] Send %u bytes in %hhu buffers (segment=%hu) Dst=%!ADDR!, Src=%!ADDR!
// QuicTraceEvent(
            DatapathSend,
            "[data][%p] Send %u bytes in %hhu buffers (segment=%hu) Dst=%!ADDR!, Src=%!ADDR!",
            Socket,
            SendData->TotalSize,
            SendData->BufferCount,
            SendData->SegmentSize,
            CASTED_CLOG_BYTEARRAY(sizeof(*RemoteAddress), RemoteAddress),
            CASTED_CLOG_BYTEARRAY(sizeof(*LocalAddress), LocalAddress));
// arg2 = arg2 = Socket = arg2
// arg3 = arg3 = SendData->TotalSize = arg3
// arg4 = arg4 = SendData->BufferCount = arg4
// arg5 = arg5 = SendData->SegmentSize = arg5
// arg6 = arg6 = CASTED_CLOG_BYTEARRAY(sizeof(*RemoteAddress), RemoteAddress) = arg6
// arg7 = arg7 = CASTED_CLOG_BYTEARRAY(sizeof(*LocalAddress), LocalAddress) = arg7
----------------------------------------------------------*/
TRACEPOINT_EVENT(CLOG_DATAPATH_KQUEUE_C, DatapathSend,
    TP_ARGS(
        const void *, arg2,
        unsigned int, arg3,
        unsigned char, arg4,
        unsigned short, arg5,
        unsigned int, arg6_len,
        const void *, arg6,
        unsigned int, arg7_len,
        const void *, arg7), 
    TP_FIELDS(
        ctf_integer_hex(uint64_t, arg2, arg2)
        ctf_integer(unsigned int, arg3, arg3)
        ctf_integer(unsigned char, arg4, arg4)
        ctf_integer(unsigned short, arg5, arg5)
        ctf_integer(unsigned int, arg6_len, arg6_len)
        ctf_sequence(char, arg6, arg6, unsigned int, arg6_len)
        ctf_integer(unsigned int, arg7_len, arg7_len)
        ctf_sequence(char, arg7, arg7, unsigned int, arg7_len)
    )
)
