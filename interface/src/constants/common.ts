// When UI is opened via LAN IP (not localhost), point WS/sc-web at the same host.
const browserHost =
    typeof window !== 'undefined' && window.location?.hostname
        ? window.location.hostname
        : 'localhost';

const defaultSocketUrl = `ws://${browserHost}:8090`;
const defaultScUrl = `ws://${browserHost}:8090`;
const defaultScScWebUrl = `http://${browserHost}:8000`;

export const SC_URL = process.env.SC_URL ?? defaultScUrl;
export const SOCKET_URL = process.env.SOCKET_URL ?? defaultSocketUrl;
export const SC_WEB_URL = process.env.SC_WEB_URL ?? defaultScScWebUrl;
