export default {
  // These are app level configs.
  lang: "en-US",
  title: "Advance Algorithms",
  description: "Vite & Vue powered static site",
  base: "/advance-algorithms/",
  lastUpdated: true,
  markdown: {
    theme: "material-palenight",
    lineNumbers: true,
  },
  themeConfig: {
    logo: "/logo.svg",
    sidebar: {
      "/guide/": sidebarGuide(),
    },
    socialLinks: [
      {
        icon: "github",
        link: "https://github.com/swaubhik/advance-algorithms",
      },
      { icon: "twitter", link: "https://twitter.com/SwaubhikC" },
    ],
    footer: {
      message: "Released under the MIT License.",
      copyright: `Copyright © 2022-${new Date().getFullYear()} Swaubhik Chakraborty`,
    },
    editLink: {
      pattern:
        "https://github.com/swaubhik/advance-algorithms/edit/website/docs/:path",
      text: "Edit this page on GitHub",
    },
  },
};
function sidebarGuide() {
  return [
    {
      text: "Introduction",
      collapsible: true,
      items: [{ text: "Getting Started", link: "/guide/getting-started" }],
    },
    {
      text: "Contents",
      collapsible: true,
      items: [
        { text: "C", link: "/guide/c" },
        { text: "C++", link: "/guide/C++" },
        { text: "JS", link: "/guide/JS" },
      ],
    },
  ];
}
